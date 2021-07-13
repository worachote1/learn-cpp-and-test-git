#include<iostream>
using namespace std;
//class is combination of member variables and member functions, the object is created with the help of class.
//class is like blueprint of a house ,class does not occupie any space in RAM. 

//That is object, that will actually occupie memory in the  RAM , object is like creating actual house .


//Class
class house {
	//
	private: //variables in side private (access specifier) can not be use out side the class		
			//member variables
			int length = 0, breadth = 0;
	
	public: // public is access specifier allowing to variables out side the class.
			//member functions
			void setData(int x , int y) {
				length = x;
				breadth = y;
			}
			void area() {
				cout << " Area of house "<<(length * breadth);
			}
};


int main() {

	// create object
	house tuscino; // now memory allocatedrrr
	tuscino.setData(500,700);
	tuscino.area();


	return 0;
}