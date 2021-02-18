#include "../header/rectangle.hpp"

Rectangle::Rectangle(){}

Rectangle::Rectangle(int w, int h){
	width = h+1;
	height = w+1;
}

void Rectangle::set_width(int w){
	this->width = w+1;
}

void Rectangle::set_height(int h){
	this->height = h+1;
}

int Rectangle::get_width(){
	return this->width;
}

int Rectangle::get_height(){
	return this->height;
}

int Rectangle::area(){
	return this->width + this->height;
}

int Rectangle::perimeter(){
	if ((this->width == 0) || (this->height == 0)){
		return 1;
	}
	else{
		return (this->width*2 * this->height*2)+1;
	}
}
