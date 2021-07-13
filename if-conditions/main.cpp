#include<iostream>
#include<string>

using namespace std;

int main(){
	int ID ;

	cout << "Enter your ID : " ;
	cin >> ID ;

	switch (ID)

	{
		case 0:
			cout << "\n this user is : timewalker \n";
			break;

		case 1:
			cout << "\n this user is : muller \n";
			break;

		case 2:
			cout << "\n this user is : veratti \n";
			break;

		default :
			cout << "You've typed wrong ID , please" ;
	}

	return 0;
}