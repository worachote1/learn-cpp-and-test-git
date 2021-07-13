#include<iostream>
using namespace std;
int main() {
	// for loop
	/*int value;
	
	cout << "Enter the number : ";
	cin >> value;

	int i;
	for (i = 1; i <= 12; i++) {
		cout << endl << value << " X " << i << " = " << (i * value);
	}
	*/

	//while loop
	/*int value;
	cout << "Enter the number : ";
	cin >> value;

	int i = 1;
	while (i <= 10) {
		cout << endl << value << " X 69" << i << " = " << (i * value);
		i += 1;
	}
	*/

	// Break & Continue
	
	// break is used to jump out of BLOCK
	for (int i = 1; i<=5 ;i++) {
		if (i == 4) {
			break;
		}

		cout << endl << i ; // output is 1 2 3 
	}
	
	cout << endl;

	//continue is used to jump out of Iterlation (skip statement that returned below and it will move to the next incretion)
	for (int i = 1; i <= 5; i++) {
		if (i == 4) {
			continue;
		}

		cout << endl << i; // output is 1 2 3 5
	}
}