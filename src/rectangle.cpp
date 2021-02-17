#include "../header/rectangle.hpp"

Rectangle::Rectangle(){}

Rectangle::Rectangle(int w, int h){
	width = w;
	height = h;
}

void Rectangle::set_width(int w){
	this->width = w;
}

void Rectangle::set_height(int h){
	this->height = h;
}

int Rectangle::get_width(){
	return this->width;
}

int Rectangle::get_height(){
	return this->height;
}

int Rectangle::area(){
	return this->width * this->height;
}

int Rectangle::perimeter(){
	if ((this->width == 0) || (this->height == 0)){
		return 0;
	}
	else{
		return this->width*2 + this->height*2;
	}
}
