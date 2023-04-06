/* Snake.h */
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "MiLibreria.h"
using namespace std;

/*classes*/
class snake{ // la serpiente
	private:
		int posicion[2];
	public:
		/*---------------------*/
		snake(int,int); // builder
		/*---------------------*/
		void move(int,int);
		void printSnake();
		void eraseSnake();
		int getPositionX();
		int getPositionY();
};

class divSnake{ // paredes que rodean a la serpiente
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
		int getTop();
		int getBottom();
		int getRight();
		int getLeft();
		bool collision(snake);
};

class foodSnake{ //comida para la serpiente
	private:
		int position[2];
	public:
		/*---------------------*/
		foodSnake();// builder
		/*---------------------*/
		void generateFood(divSnake);
		void eraseFood();
		bool collision(snake);
};
/*######################[ class snake ]######################*/
snake::snake(int x, int y){
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
void snake::printSnake(){
	go(getPositionX(),getPositionY());cout<<"#";
}
void snake::eraseSnake(){
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
int divSnake::getTop(){
	return height_up;
}
int divSnake::getBottom(){
	return height_down;
}
int divSnake::getRight(){
	return width_right;
}
int divSnake::getLeft(){
	return width_left;
}
bool divSnake::collision(snake player){
	return true;
}
/*######################[ class foodSnake]######################*/
foodSnake::foodSnake(){
}
void foodSnake::generateFood(divSnake walls){
	int right_limit = walls.getRight();
	int left_limit = walls.getLeft();
	int top_limit = walls.getTop();
	int bottom_limit = walls.getBottom();
	srand(time(NULL));
	position[0] = left_limit +rand()% (right_limit - left_limit);
	position[1] = top_limit + rand()% (top_limit - bottom_limit);
	go(position[0],position[1]);cout<<char(4);
}
void foodSnake::eraseFood(){
	go(position[0],position[1]);cout<<" ";
}
bool foodSnake::collision(snake player){
	if(player.getPositionX()==position[0] && player.getPositionY()==position[1]){
		return true;
	}
	return false;
}
/* fin*/