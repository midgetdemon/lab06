#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

int main(){
	Rectangle rect1;
	Rectangle rect2(8, 3);

	rect1.set_width(3);
	rect1.set_height(4);

 	cout << "Rectangle 1 area: " << rect1.area() << endl;
	cout << "Rectangle 1 perimeter: " << rect1.perimeter() << endl;
	cout << "Rectangle 2 area: " << rect2.area() << endl;
	cout << "Rectangle 2 perimeter: " << rect2.perimeter() << endl;
	return 0;
}
