/* Snake.h */
#include <iostream>
#include <stdlib.h>
#include "MiLibreria.h"
using namespace std;

/*classes*/
class snake{
	private:
		int posicion[2];
	public:
		/*---------------------*/
		snake(int,int); // builder
		/*---------------------*/
		void move(int,int);
		void print_snake();
		void erase_snake();
		int getPositionX();
		int getPositionY();
};

class divSnake{
	private:
		int width_left;
		int width_right;
		int height_up;
		int height_down;
	public:
		/*---------------------*/
		divSnake(int,int,int,int);// builder
		/*---------------------*/
		void print_div();
		int getUP();
		int getDOWN();
		int getRight();
		int getLeft();
};

/*######################[ class snake ]######################*/
snake::snake(int x,int y){
	posicion[0] = x;
	posicion[1] = y;
}
void snake::move(int x,int y){
	posicion[0] = x;
	posicion[1] = y;
}
int snake::getPositionX(){
	return posicion[0];
}
int snake::getPositionY(){
	return posicion[1];
}
void snake::print_snake(){
	go(getPositionX(),getPositionY());cout<<"#";
}
void snake::erase_snake(){
	go(getPositionX(),getPositionY());cout<<" ";
}
/*######################[ class divSnake ]######################*/
divSnake::divSnake(int Xa, int Xb, int Ya, int Yb){
	width_left = Xa;
	width_right = Xb;
	height_up = Ya;
	height_down = Yb;
}
void divSnake::print_div(){
	quadrate(width_left,width_right,height_up,height_down);
}
int divSnake::getUP(){
	return height_up;
}
int divSnake::getDOWN(){
	return height_down;
}
int divSnake::getRight(){
	return width_right;
}
int divSnake::getLeft(){
	return width_left;
}