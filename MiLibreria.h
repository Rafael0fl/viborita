// Mi Libreria 
#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
// direccionales y teclas de evento
#define UP           72
#define DOWN         80
#define RIGHT        77
#define LEFT         75
#define ESC          27
#define ENTER        13
#define BACK         8
#define BACKSPACE    32
// colores opacos
#define azul             SetConsoleTextAttribute(cr,1)
#define verde            SetConsoleTextAttribute(cr,2)
#define agua             SetConsoleTextAttribute(cr,3)
#define rojo             SetConsoleTextAttribute(cr,4)
#define purpura          SetConsoleTextAttribute(cr,5)
#define amarillo         SetConsoleTextAttribute(cr,6)
#define blanco           SetConsoleTextAttribute(cr,7)
#define gris             SetConsoleTextAttribute(cr,8)
// colores brillantes
#define Azul             SetConsoleTextAttribute(cr,9)
#define Verde            SetConsoleTextAttribute(cr,10)
#define Agua             SetConsoleTextAttribute(cr,11)
#define Rojo             SetConsoleTextAttribute(cr,12)
#define Purpura          SetConsoleTextAttribute(cr,13)
#define Amarillo         SetConsoleTextAttribute(cr,14)
#define Blanco           SetConsoleTextAttribute(cr,15)
// fondo azul
#define negro_azul       SetConsoleTextAttribute(cr,16)
#define azul_azul        SetConsoleTextAttribute(cr,17)
#define verde_azul       SetConsoleTextAttribute(cr,18)
#define agua_azul        SetConsoleTextAttribute(cr,19)
#define rojo_azul        SetConsoleTextAttribute(cr,20)
#define purpura_azul     SetConsoleTextAttribute(cr,21)
#define amarillo_azul    SetConsoleTextAttribute(cr,22)
#define blanco_azul      SetConsoleTextAttribute(cr,23)
#define gris_azul        SetConsoleTextAttribute(cr,24)
#define Azul_azul        SetConsoleTextAttribute(cr,25)
#define Verde_azul       SetConsoleTextAttribute(cr,26)
#define Agua_azul        SetConsoleTextAttribute(cr,27)
#define Rojo_azul        SetConsoleTextAttribute(cr,28)
#define Purpura_azul     SetConsoleTextAttribute(cr,29)
#define Amarillo_azul    SetConsoleTextAttribute(cr,30)
#define Blanco_azul      SetConsoleTextAttribute(cr,31)
// fondo verde
#define negro_verde      SetConsoleTextAttribute(cr,32)
#define azul_verde       SetConsoleTextAttribute(cr,33)
#define verde_verde      SetConsoleTextAttribute(cr,34)
#define agua_verde       SetConsoleTextAttribute(cr,35)
#define rojo_verde       SetConsoleTextAttribute(cr,36)
#define purpura_verde    SetConsoleTextAttribute(cr,37)
#define amarillo_verde   SetConsoleTextAttribute(cr,38)
#define blanco_verde     SetConsoleTextAttribute(cr,39)
#define gris_verde       SetConsoleTextAttribute(cr,40)
#define Azul_verde       SetConsoleTextAttribute(cr,41)
#define Verde_verde      SetConsoleTextAttribute(cr,42)
#define Agua_verde       SetConsoleTextAttribute(cr,43)
#define Rojo_verde       SetConsoleTextAttribute(cr,44)
#define Purpura_verde    SetConsoleTextAttribute(cr,45)
#define Amarillo_verde   SetConsoleTextAttribute(cr,46)
#define Blanco_verde     SetConsoleTextAttribute(cr,47)
// fondo aguamarina
#define negro_agua       SetConsoleTextAttribute(cr,48)
#define azul_agua        SetConsoleTextAttribute(cr,49)
#define verde_agua       SetConsoleTextAttribute(cr,50)
#define agua_agua        SetConsoleTextAttribute(cr,51)
#define rojo_agua        SetConsoleTextAttribute(cr,52)
#define purpura_agua     SetConsoleTextAttribute(cr,53)
#define amarillo_agua    SetConsoleTextAttribute(cr,54)
#define blanco_agua      SetConsoleTextAttribute(cr,55)
#define gris_agua        SetConsoleTextAttribute(cr,56)
#define Azul_agua        SetConsoleTextAttribute(cr,57)
#define Verde_agua       SetConsoleTextAttribute(cr,58)
#define Agua_agua        SetConsoleTextAttribute(cr,59)
#define Rojo_agua        SetConsoleTextAttribute(cr,60)
#define Purpura_agua     SetConsoleTextAttribute(cr,61)
#define Amarillo_agua    SetConsoleTextAttribute(cr,62)
#define Blanco_agua      SetConsoleTextAttribute(cr,63)
// fondo rojo
#define negro_rojo       SetConsoleTextAttribute(cr,64)
#define azul_rojo        SetConsoleTextAttribute(cr,65)
#define verde_rojo       SetConsoleTextAttribute(cr,66)
#define agua_rojo        SetConsoleTextAttribute(cr,67)
#define rojo_rojo        SetConsoleTextAttribute(cr,68)
#define purpura_rojo     SetConsoleTextAttribute(cr,69)
#define amarillo_rojo    SetConsoleTextAttribute(cr,70)
#define blanco_rojo      SetConsoleTextAttribute(cr,71)
#define gris_rojo        SetConsoleTextAttribute(cr,72)
#define Azul_rojo        SetConsoleTextAttribute(cr,73)
#define Verde_rojo       SetConsoleTextAttribute(cr,74)
#define Agua_rojo        SetConsoleTextAttribute(cr,75)
#define Rojo_rojo        SetConsoleTextAttribute(cr,76)
#define Purpura_rojo     SetConsoleTextAttribute(cr,77)
#define Amarillo_rojo    SetConsoleTextAttribute(cr,78)
#define Blanco_rojo      SetConsoleTextAttribute(cr,79)
// fondo purpura
#define negro_purpura    SetConsoleTextAttribute(cr,80)
#define azul_purpura     SetConsoleTextAttribute(cr,81)
#define verde_purpura    SetConsoleTextAttribute(cr,82)
#define agua_purpura     SetConsoleTextAttribute(cr,83)
#define rojo_purpura     SetConsoleTextAttribute(cr,84)
#define purpura_purpura  SetConsoleTextAttribute(cr,85)
#define amarillo_purpura SetConsoleTextAttribute(cr,86)
#define blanco_purpura   SetConsoleTextAttribute(cr,87)
#define gris_purpura     SetConsoleTextAttribute(cr,88)
#define Azul_purpura     SetConsoleTextAttribute(cr,89)
#define Verde_purpura    SetConsoleTextAttribute(cr,90)
#define Agua_purpura     SetConsoleTextAttribute(cr,91)
#define Rojo_purpura     SetConsoleTextAttribute(cr,92)
#define Purpura_purpura  SetConsoleTextAttribute(cr,93)
#define Amarillo_purpura SetConsoleTextAttribute(cr,94)
#define Blanco_purpura   SetConsoleTextAttribute(cr,95)
// fondo amarillo
#define negro_amarillo   SetConsoleTextAttribute(cr,96)
#define azul_amarillo    SetConsoleTextAttribute(cr,97)
#define verde_amarillo   SetConsoleTextAttribute(cr,98)
#define agua_amarillo    SetConsoleTextAttribute(cr,99)
#define rojo_amarillo    SetConsoleTextAttribute(cr,100)
#define purpura_amarillo SetConsoleTextAttribute(cr,101)
#define amarillo_amarillo SetConsoleTextAttribute(cr,102)
#define blanco_amarillo  SetConsoleTextAttribute(cr,103)
#define gris_amarillo    SetConsoleTextAttribute(cr,104)
#define Azul_amarillo    SetConsoleTextAttribute(cr,105)
#define Verde_amarillo   SetConsoleTextAttribute(cr,106)
#define Agua_amarillo    SetConsoleTextAttribute(cr,107)
#define Rojo_amarillo    SetConsoleTextAttribute(cr,108)
#define Purpura_amarillo SetConsoleTextAttribute(cr,109)
#define Amarillo_amarillo SetConsoleTextAttribute(cr,110)
#define Blanco_amarillo  SetConsoleTextAttribute(cr,111)
// fondo blanco
#define negro_blanco     SetConsoleTextAttribute(cr,112)
#define azul_blanco      SetConsoleTextAttribute(cr,113)
#define verde_blanco     SetConsoleTextAttribute(cr,114)
#define agua_blanco      SetConsoleTextAttribute(cr,115)
#define rojo_blanco      SetConsoleTextAttribute(cr,116)
#define purpura_blanco   SetConsoleTextAttribute(cr,117)
#define amarillo_blanco  SetConsoleTextAttribute(cr,118)
#define blanco_blanco    SetConsoleTextAttribute(cr,119)
#define gris_blanco      SetConsoleTextAttribute(cr,120)
#define Azul_blanco      SetConsoleTextAttribute(cr,121)
#define Verde_blanco     SetConsoleTextAttribute(cr,122)
#define Agua_blanco      SetConsoleTextAttribute(cr,123)
#define Rojo_blanco      SetConsoleTextAttribute(cr,124)
#define Purpura_blanco   SetConsoleTextAttribute(cr,125)
#define Amarillo_blanco  SetConsoleTextAttribute(cr,126)
#define Blanco_blanco    SetConsoleTextAttribute(cr,127)
// fondo gris
#define negro_gris       SetConsoleTextAttribute(cr,128)
#define azul_gris        SetConsoleTextAttribute(cr,129)
#define verde_gris       SetConsoleTextAttribute(cr,130)
#define agua_gris        SetConsoleTextAttribute(cr,131)
#define rojo_gris        SetConsoleTextAttribute(cr,132)
#define purpura_gris     SetConsoleTextAttribute(cr,133)
#define amarillo_gris    SetConsoleTextAttribute(cr,134)
#define blanco_gris      SetConsoleTextAttribute(cr,135)
#define gris_gris        SetConsoleTextAttribute(cr,136)
#define Azul_gris        SetConsoleTextAttribute(cr,137)
#define Verde_gris       SetConsoleTextAttribute(cr,138)
#define Agua_gris        SetConsoleTextAttribute(cr,139)
#define Rojo_gris        SetConsoleTextAttribute(cr,140)
#define Purpura_gris     SetConsoleTextAttribute(cr,141)
#define Amarillo_gris    SetConsoleTextAttribute(cr,142)
#define Blanco_gris      SetConsoleTextAttribute(cr,143)
// fondo azul brillante
#define negro_Azul       SetConsoleTextAttribute(cr,144)
#define azul_Azul        SetConsoleTextAttribute(cr,145)
#define verde_Azul       SetConsoleTextAttribute(cr,146)
#define agua_Azul        SetConsoleTextAttribute(cr,147)
#define rojo_Azul        SetConsoleTextAttribute(cr,148)
#define purpura_Azul     SetConsoleTextAttribute(cr,149)
#define amarillo_Azul    SetConsoleTextAttribute(cr,150)
#define blanco_Azul      SetConsoleTextAttribute(cr,151)
#define gris_Azul        SetConsoleTextAttribute(cr,152)
#define Azul_Azul        SetConsoleTextAttribute(cr,153)
#define Verde_Azul       SetConsoleTextAttribute(cr,154)
#define Agua_Azul        SetConsoleTextAttribute(cr,155)
#define Rojo_Azul        SetConsoleTextAttribute(cr,156)
#define Purpura_Azul     SetConsoleTextAttribute(cr,157)
#define Amarillo_Azul    SetConsoleTextAttribute(cr,158)
#define Blanco_Azul      SetConsoleTextAttribute(cr,159)
// fondo verde brillante
#define negro_Verde      SetConsoleTextAttribute(cr,160)
#define azul_Verde       SetConsoleTextAttribute(cr,161)
#define verde_Verde      SetConsoleTextAttribute(cr,162)
#define agua_Verde       SetConsoleTextAttribute(cr,163)
#define rojo_Verde       SetConsoleTextAttribute(cr,164)
#define purpura_Verde    SetConsoleTextAttribute(cr,165)
#define amarillo_Verde   SetConsoleTextAttribute(cr,166)
#define blanco_Verde     SetConsoleTextAttribute(cr,167)
#define gris_Verde       SetConsoleTextAttribute(cr,168)
#define Azul_Verde       SetConsoleTextAttribute(cr,169)
#define Verde_Verde      SetConsoleTextAttribute(cr,170)
#define Agua_Verde       SetConsoleTextAttribute(cr,171)
#define Rojo_Verde       SetConsoleTextAttribute(cr,172)
#define Purpura_Verde    SetConsoleTextAttribute(cr,173)
#define Amarillo_Verde   SetConsoleTextAttribute(cr,174)
#define Blanco_Verde     SetConsoleTextAttribute(cr,175)
// fondo aguamarina brillante
#define negro_Agua       SetConsoleTextAttribute(cr,176)
#define azul_Agua        SetConsoleTextAttribute(cr,177)
#define verde_Agua       SetConsoleTextAttribute(cr,178)
#define agua_Agua        SetConsoleTextAttribute(cr,179)
#define rojo_Agua        SetConsoleTextAttribute(cr,180)
#define purpura_Agua     SetConsoleTextAttribute(cr,181)
#define amarillo_Agua    SetConsoleTextAttribute(cr,182)
#define blanco_Agua      SetConsoleTextAttribute(cr,183)
#define gris_Agua        SetConsoleTextAttribute(cr,184)
#define Azul_Agua        SetConsoleTextAttribute(cr,185)
#define Verde_Agua       SetConsoleTextAttribute(cr,186)
#define Agua_Agua        SetConsoleTextAttribute(cr,187)
#define Rojo_Agua        SetConsoleTextAttribute(cr,188)
#define Purpura_Agua     SetConsoleTextAttribute(cr,189)
#define Amarillo_Agua    SetConsoleTextAttribute(cr,190)
#define Blanco_Agua      SetConsoleTextAttribute(cr,191)
// fondo rojo brillante
#define negro_Rojo       SetConsoleTextAttribute(cr,192)
#define azul_Rojo        SetConsoleTextAttribute(cr,193)
#define verde_Rojo       SetConsoleTextAttribute(cr,194)
#define agua_Rojo        SetConsoleTextAttribute(cr,195)
#define rojo_Rojo        SetConsoleTextAttribute(cr,196)
#define purpura_Rojo     SetConsoleTextAttribute(cr,197)
#define amarillo_Rojo    SetConsoleTextAttribute(cr,198)
#define blanco_Rojo      SetConsoleTextAttribute(cr,199)
#define gris_Rojo        SetConsoleTextAttribute(cr,200)
#define Azul_Rojo        SetConsoleTextAttribute(cr,201)
#define Verde_Rojo       SetConsoleTextAttribute(cr,202)
#define Agua_Rojo        SetConsoleTextAttribute(cr,203)
#define Rojo_Rojo        SetConsoleTextAttribute(cr,204)
#define Purpura_Rojo     SetConsoleTextAttribute(cr,205)
#define Amarillo_Rojo    SetConsoleTextAttribute(cr,206)
#define Blanco_Rojo      SetConsoleTextAttribute(cr,207)
// fondo purpura brillante
#define negro_Purpura    SetConsoleTextAttribute(cr,208)
#define azul_Purpura     SetConsoleTextAttribute(cr,209)
#define verde_Purpura    SetConsoleTextAttribute(cr,210)
#define agua_Purpura     SetConsoleTextAttribute(cr,211)
#define rojo_Purpura     SetConsoleTextAttribute(cr,212)
#define purpura_Purpura  SetConsoleTextAttribute(cr,213)
#define amarillo_Purpura SetConsoleTextAttribute(cr,214)
#define blanco_Purpura   SetConsoleTextAttribute(cr,215)
#define gris_Purpura     SetConsoleTextAttribute(cr,216)
#define Azul_Purpura     SetConsoleTextAttribute(cr,217)
#define Verde_Purpura    SetConsoleTextAttribute(cr,218)
#define Agua_Purpura     SetConsoleTextAttribute(cr,219)
#define Rojo_Purpura     SetConsoleTextAttribute(cr,220)
#define Purpura_Purpura  SetConsoleTextAttribute(cr,221)
#define Amarillo_Purpura SetConsoleTextAttribute(cr,222)
#define Blanco_Purpura   SetConsoleTextAttribute(cr,223)
// fondo amarillo brillante
#define negro_Amarillo   SetConsoleTextAttribute(cr,224)
#define azul_Amarillo    SetConsoleTextAttribute(cr,225)
#define verde_Amarillo   SetConsoleTextAttribute(cr,226)
#define agua_Amarillo    SetConsoleTextAttribute(cr,227)
#define rojo_Amarillo    SetConsoleTextAttribute(cr,228)
#define purpura_Amarillo SetConsoleTextAttribute(cr,229)
#define amarillo_Amarillo SetConsoleTextAttribute(cr,230)
#define blanco_Amarillo  SetConsoleTextAttribute(cr,231)
#define gris_Amarillo    SetConsoleTextAttribute(cr,232)
#define Azul_Amarillo    SetConsoleTextAttribute(cr,233)
#define Verde_Amarillo   SetConsoleTextAttribute(cr,234)
#define Agua_Amarillo    SetConsoleTextAttribute(cr,235)
#define Rojo_Amarillo    SetConsoleTextAttribute(cr,236)
#define Purpura_Amarillo SetConsoleTextAttribute(cr,237)
#define Amarillo_Amarillo SetConsoleTextAttribute(cr,238)
#define Blanco_Amarillo  SetConsoleTextAttribute(cr,239)
// fondo blanco brillante
#define negro_Blanco     SetConsoleTextAttribute(cr,240)
#define azul_Blanco      SetConsoleTextAttribute(cr,241)
#define verde_Blanco     SetConsoleTextAttribute(cr,242)
#define agua_Blanco      SetConsoleTextAttribute(cr,243)
#define rojo_Blanco      SetConsoleTextAttribute(cr,244)
#define purpura_Blanco   SetConsoleTextAttribute(cr,245)
#define amarillo_Blanco  SetConsoleTextAttribute(cr,246)
#define blanco_Blanco    SetConsoleTextAttribute(cr,247)
#define gris_Blanco      SetConsoleTextAttribute(cr,248)
#define Azul_Blanco      SetConsoleTextAttribute(cr,249)
#define Verde_Blanco     SetConsoleTextAttribute(cr,250)
#define Agua_Blanco      SetConsoleTextAttribute(cr,251)
#define Rojo_Blanco      SetConsoleTextAttribute(cr,252)
#define Purpura_Blanco   SetConsoleTextAttribute(cr,253)
#define Amarillo_Blanco  SetConsoleTextAttribute(cr,254)
#define Blanco_Blanco    SetConsoleTextAttribute(cr,255)
//#define SetConsoleTextAttribute(cr,)
//#########################################################
using namespace std;
HANDLE cr=GetStdHandle(STD_OUTPUT_HANDLE); 
//#########################################################
void go(int x,int y){ // GOTOXY
 	HANDLE hola;
	COORD posicion;
	posicion.X=x;
	posicion.Y=y;
	hola=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hola,posicion);
}
//#########################################################
void marco(int Xa,int Xb,int Ya,int Yb){ // DIBUJA UN MARCO PARA TITULO Y OPCIONES
	//------------------------------------------------------- dibujando lineas
	for(int i=Xa+1;i<Xb;i++){        // lineas horizontales
		go(i,Ya);cout<<char(205);
		go(i,Yb);cout<<char(205);
		go(i,Ya+2);cout<<char(205);	
	}
	for(int i=Ya+1;i<Yb;i++){        // lineas verticales
		go(Xa,i);cout<<char(186);
		go(Xb,i);cout<<char(186);
	}
	//------------------------------------------------------- dibujando esquinas
	go(Xa,Ya);cout<<char(201); // esquina superior izquierda
	go(Xb,Ya);cout<<char(187); // esquina superior derecha
	go(Xa,Yb);cout<<char(200); // esquina inferior izquierda
	go(Xb,Yb);cout<<char(188); // esquina inferior derecha
	go(Xa,Ya+2);cout<<char(204); // esquinero izqueirdo
	go(Xb,Ya+2);cout<<char(185); // esquinero derecho
}
void quadrate(int Xa,int Xb,int Ya,int Yb){ // DIBUJA UN RECUADRO CON DOBLE LINEA
	//------------------------------------------------------- dibujando lineas
	for(int i=Xa+1;i<Xb;i++){        // lineas horizontales
		go(i,Ya);cout<<char(205);
		go(i,Yb);cout<<char(205);
	}
	for(int i=Ya+1;i<Yb;i++){        // lineas verticales
		go(Xa,i);cout<<char(186);
		go(Xb,i);cout<<char(186);
	}
	//------------------------------------------------------- dibujando esquinas
	go(Xa,Ya);cout<<char(201); // esquina superior izquierda
	go(Xb,Ya);cout<<char(187); // esquina superior derecha
	go(Xa,Yb);cout<<char(200); // esquina inferior izquierda
	go(Xb,Yb);cout<<char(188); // esquina inferior derecha
}
void quadrate_null(int Xa,int Xb,int Ya,int Yb){ // CREA UN RECUADRO PERO DE ESPACIOS VACIOS
	//------------------------------------------------------- borrando lineas
	for(int i=Xa+1;i<Xb;i++){        // lineas horizontales
		go(i,Ya);cout<<" ";
		go(i,Yb);cout<<" ";
	}
	for(int i=Ya+1;i<Yb;i++){        // lineas verticales
		go(Xa,i);cout<<" ";
		go(Xb,i);cout<<" ";
	}
	//------------------------------------------------------- borrando esquinas
	go(Xa,Ya);cout<<" "; // esquina superior izquierda
	go(Xb,Ya);cout<<" "; // esquina superior derecha
	go(Xa,Yb);cout<<" "; // esquina inferior izquierda
	go(Xb,Yb);cout<<" "; // esquina inferior derecha
}
void fill(int y,int a,int b,int color){ // RELLENA UNA LINEA DE A -> B CON EL COLOR INDICADO
	go(a,y);SetConsoleTextAttribute(cr,color);
	for(int i=a;i<b+1;i++){cout<<" ";}
}
void line(int n){ // DIBUJA UNA LINEA DE N ESPACIOS
	for(int i=0;i<n;i++){
		cout<<char(196);
	}
}

/* fin */