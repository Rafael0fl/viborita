/* Snake.h */
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "MiLibreria.h"
using namespace std;

/*classes*/

class divSnake{ // walls arround the snake
	private:
		int width_left;
		int width_right;
		int height_up;
		int height_down;
	public:
		/*---------------------*/
		divSnake(int,int,int,int);
		/*---------------------*/
		void printDivSnake();
		int getTop();
		int getBottom();
		int getRight();
		int getLeft();
};

class foodSnake{ // food for the snake
	private:
		int position[2];
	public:
		/*---------------------*/
		foodSnake();
		/*---------------------*/
		void generateFood(divSnake);
		void eraseFood();
		int getPosition(char);
};

class snake{ // the snake
	private:
		int** body_snake;
		int size;
	public:
		/*---------------------*/
		snake(int,int,int);
		~snake();
		/*---------------------*/
		void move(int,int);
		void printSnake();
		void eraseSnake();
		int getPositionHead(char);
		int getPositionTail(char);
		void setPositionTail();
		bool collisionWithCommonFood(foodSnake);
		bool collisionWithDivSnake(divSnake);
};
/*######################[ class snake ]######################*/
snake::snake(int size_snake,int x, int y){
	size = size_snake;
	body_snake = new int* [size];
	for(int i=0;i<size;i++){
		body_snake[i] = new int[2];
	}
	*(*(body_snake+0)+0) = x;
	*(*(body_snake+0)+1) = y;
	for(int i=1;i<size;i++){
		body_snake[i][0] = 0;
		body_snake[i][1] = 0;
	}
}
snake::~snake(){
	for(int i=0;i<size;i++){
		delete[] body_snake[i];
	}
	delete[] body_snake;
}
void snake::move(int x,int y){
	body_snake[0][0] = x;
	body_snake[0][1] = y;
}
int snake::getPositionHead(char XY){
	if(XY=='x' || XY=='X'){
		return body_snake[0][0];
	}
	if(XY=='y' || XY=='Y'){
		return body_snake[0][1];
	}
	else return 0;
}
int snake::getPositionTail(char XY){
	int index = -1;
	for(int i=0;i<size;i++){
		if(body_snake[i][0]!=0 && body_snake[i][1]!=0){
			index++;
		}
	}
	if(XY=='x' || XY=='X'){
		return body_snake[index][0];
	}
	else if(XY=='y' || XY=='Y'){
		return body_snake[index][1];
	}
	else return 0;
}
void snake::setPositionTail(){
	int index = -1;
	for(int i=0;i<size;i++){
		if(body_snake[i][0]!=0 && body_snake[i][1]!=0){
			index++;
		}
	}
	if(index>0){	
		body_snake[index][0] = body_snake[index-1][0];
		body_snake[index][1] = body_snake[index-1][1];
	}
}
void snake::printSnake(){
	go(getPositionHead('x'),getPositionHead('y'));
	cout<<"*";
}
void snake::eraseSnake(){
	go(getPositionTail('x'),getPositionTail('y'));
	cout<<" ";
}
bool snake::collisionWithCommonFood(foodSnake common_food){
	if(common_food.getPosition('x')==getPositionHead('x') && common_food.getPosition('y')==getPositionHead('y')){
		return true;
	}
	else return false;
}
bool snake::collisionWithDivSnake(divSnake Walls){
	if(getPositionHead('x')==Walls.getLeft() || getPositionHead('x')==Walls.getRight()){
		return true;
	}
	if(getPositionHead('y')==Walls.getTop() || getPositionHead('y')==Walls.getBottom()){
		return true;
	}
	else return false;
}
/*######################[ class divSnake ]######################*/
divSnake::divSnake(int Xa, int Xb, int Ya, int Yb){
	width_left = Xa;
	width_right = Xb;
	height_up = Ya;
	height_down = Yb;
}
void divSnake::printDivSnake(){
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
int foodSnake::getPosition(char XY){
	if(XY=='x' || XY=='X'){
		return position[0];
	}
	if(XY=='y' || XY=='Y'){
		return position[1];
	}
	else return 0;
}
/* fin*/