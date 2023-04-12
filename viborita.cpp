#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string>
#include <string.h>
#include <math.h>
#include <time.h>
#include "Snake.h"

using namespace std;
/*--------------------------------------------------*/
int sizeWidthMax();           // obtiene el ancho de la pantalla
int sizeHeightMax();          // obtiene el alto de la pantalla
void fullScreen();            // pone la consola en pantalla completa
void startGame(int,int);      // inicia el juego
/*--------------------------------------------------*/

int main(){
    int ancho_de_pantalla = sizeWidthMax();
    int alto_de_pantalla = sizeHeightMax();

    fullScreen();
    startGame(ancho_de_pantalla,alto_de_pantalla);

    system("cls");
    cout<<"\n\n\t\tbye";
    Sleep(800);
    return 0;
}

/*--------------------------------------------------*/
int sizeWidthMax(){
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screenInfo;
    GetConsoleScreenBufferInfo(consoleHandle, &screenInfo);
    int screenWidth = screenInfo.srWindow.Right - screenInfo.srWindow.Left + 1;
    return screenWidth;
}
int sizeHeightMax(){
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    int screenHeight = GetSystemMetrics(SM_CYSCREEN);
    CONSOLE_FONT_INFO fontInfo;
    GetCurrentConsoleFont(consoleHandle, FALSE, &fontInfo);
    int charHeight = fontInfo.dwFontSize.Y;
    // Calcular el número máximo de filas de texto que se pueden mostrar en la pantalla
    int maxRows = screenHeight / charHeight;
    return maxRows;
}
void fullScreen(){
	HWND console = GetConsoleWindow();//obtengo el identificador de la consola
	SetWindowLong(console, GWL_STYLE, GetWindowLong(console, GWL_STYLE) & ~WS_OVERLAPPEDWINDOW);
	ShowWindow(console, SW_MAXIMIZE);
}
/*--------------------------------------------------*/
void startGame(int ancho,int alto){
    //bool vivo = true;
    int direccion = RIGHT;
    int ultima_direccion;

    go(3,2);cout<<"PROYECTO VIBORITA";

    /*  creo la paredes que rodean  */
    divSnake paredes(3,ancho-3,3,alto-3);
    /*  creo lo que movera el jugador  */
    snake Jugador(20,12,15);
    /* creo la comida comun para la viborita*/
    foodSnake comida;

    /*  comienza el juego  */
    paredes.printDivSnake();
    Jugador.printSnake();
    comida.generateFood(paredes);

    while(true){
       if(kbhit()){// recibe eventos de teclado para cambiar la direccion
            fflush(stdin);
            ultima_direccion = direccion;
            fflush(stdin);
            direccion = getch();
            if(direccion!=UP && direccion!=DOWN && direccion!=RIGHT && direccion!=LEFT){
                fflush(stdin);
                direccion = ultima_direccion; // si no se presiona un direccional, se guarda la direccion anterior
            }    
       }
       else{// borra e imprime la vivorita moviendose
            if(Jugador.collisionWithCommonFood(comida)==true){
                //Jugador.growUp();
                comida.eraseFood();
                comida.generateFood(paredes);
            }
            else Jugador.eraseSnake();

            switch (direccion){
                case UP : 
                    Jugador.setPositionTail();
                    Jugador.move(Jugador.getPositionHead('x'),Jugador.getPositionHead('y')-1);
                    break;
                case DOWN : 
                    Jugador.setPositionTail();
                    Jugador.move(Jugador.getPositionHead('x'),Jugador.getPositionHead('y')+1);
                    break;
                case RIGHT :
                    Jugador.setPositionTail();
                    Jugador.move(Jugador.getPositionHead('x')+1,Jugador.getPositionHead('y'));
                    break;
                case LEFT : 
                    Jugador.setPositionTail();
                    Jugador.move(Jugador.getPositionHead('x')-1,Jugador.getPositionHead('y'));
                    break;
            }
            Jugador.printSnake();
            Sleep(200);
       }
        /* si la viborita choca las paredes del mapa */
        if(Jugador.collisionWithDivSnake(paredes)==true){
            break;
        }
    }
}