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
    bool vivo = true;
    int direccion = RIGHT;
    int ultima_direccion;

    go(3,2);cout<<"PROYECTO VIBORITA";

    /*  creo la paredes que rodean  */
    divSnake paredes(3,ancho-3,3,alto-3);
    paredes.print_div();
    /*  creo lo que movera el jugador  */
    snake Jugador(12,15);
    /* creo la comida comun para la viborita*/
    foodSnake comida;

    /*  comienza el juego  */
    Jugador.printSnake();
    comida.generateFood(paredes);

    while(vivo==true){
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
            Jugador.eraseSnake();
            switch (direccion){
                case UP : 
                    Jugador.move(Jugador.getPositionX(),Jugador.getPositionY()-1);
                    break;
                case DOWN : 
                    Jugador.move(Jugador.getPositionX(),Jugador.getPositionY()+1);
                    break;
                case RIGHT :
                    Jugador.move(Jugador.getPositionX()+1,Jugador.getPositionY());
                    break;
                case LEFT : 
                    Jugador.move(Jugador.getPositionX()-1,Jugador.getPositionY());
                    break;
            }
            Jugador.printSnake();
            Sleep(200);
       }
        /* si la viborita choca las paredes del mapa */
        if(Jugador.getPositionX()==paredes.getRight()||Jugador.getPositionX()==paredes.getLeft()||Jugador.getPositionY()==paredes.getTop()||Jugador.getPositionY()==paredes.getBottom()){
            vivo = false;
        }
        /* si la viborita choca con la comida normal */
        if(comida.collision(Jugador)==true){
            comida.eraseFood();
            comida.generateFood(paredes);
        }
    }
}