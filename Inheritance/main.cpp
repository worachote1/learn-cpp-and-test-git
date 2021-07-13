#include<iostream>
#include<string>
using namespace std;

// Inheritance is a mechanism in which one class acqires the property of another class.


// Write a program in which cuboid class inherit rectangle class and calculate area and volume.
class rectangle {
public:
	int breadth , length;
	
	void show() {
		cout << endl << breadth;
		cout << endl << length;
	};

	void calculateArea() {
		cout << endl << " Area of Rectangle : " << length * breadth;
	};
};

class cuboid :public rectangle {
public:
	int height;

	void calculateVolume() {
		cout << endl << "Area of Volume : " << length * breadth * height;
	};
};


int main() {

	cuboid c1;
	c1.breadth = 40, c1.length = 30, c1.height = 75;

	c1.calculateArea();
	c1.calculateVolume();

	return 0;
}