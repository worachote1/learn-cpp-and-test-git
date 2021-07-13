#include<iostream>
#include<string>
using namespace std;

/* 
Constructors are of three types:
	Default Constructor. - does not take any argument
	Parametrized Constructor. - take argument
	Copy COnstructor. - used for creating new Object from existing object
*/
// Constructor have same name as class .

class Person {
	private:
		string name;
		int age;
		float height;
	public:
		//create Default Constructor
		Person() {
			// in this constructor , provide default value to member variables
			name = "NULL";
			age = 0 ;
			height = 0.0f ; 
		}

		//create Parametrized Constructor
		Person( string name_a,int age_a , float height_a  ) {
			name = name_a;
			age = age_a;
			height = height_a;
		}

		void getData() {
			cout << endl << "name : " << name ;
			cout << endl << "age : " << age;
			cout << endl << "height : " << height << endl;

		}
};

int main() {
	//
	// create object of person class 
	Person obj , obj2("Time Walker",19,171.4f );
	
	obj.getData();
	obj2.getData();
	return 0;
}