#include<iostream>
#include<string>
using namespace std;

int main() {
	/*
	string userId[4] = {"Asuji KaruHiHi","✪ Akuma","DeadlyD","kimmikung"}; // [4] is size of Array

	for (int i = 0; i <= 3;i++) {
		cout << endl << userId[i] ;
	}
	*/

	//Write a program, to take 5 number as input and fin the minimum number
	int number[5] = { };
	int i = 0;
	while (i <= 4) {
		cout << endl;
		cout << "Enter your " << (i + 1) << " number : ";
		cin >> number[i];

		i += 1;
	}

	int min = number[0];
	int j = 1;
	while (j <= 4) {  
		if (min > number[j]) {
			min = number[j];
		}

		j += 1;
	}

	cout << endl<<"minimum number is " << min;
}