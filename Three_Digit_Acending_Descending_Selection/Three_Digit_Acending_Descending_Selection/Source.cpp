/*
Luke Hage, Logan Smith
Three_Digit_Ascending_Descending_Selection
Display ascending, descending or neither based on user's 3-digit number
*/

//Libraries
#include <iostream>
#include <conio.h>

//Namespace
using namespace std;

//Functions

void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

//MAIN
void main() {
	int x;
	cout << "Add in any 3 digit positive number. . ." << endl;
	cin >> x;
	int a = (x / 100);
	int b = (x % 100) / 10;
	int c = (x % 10);
	if (a < b && b < c) {
		cout << "Your digits are in ascending order from left to right." << endl;
		}
	else if (a > b && b > c) {
		cout << "Your digits are in descending order from left to right." << endl;
	}
	else{
		cout << "Your digits are neither ascending or descending." << endl;
	}
	pause();

}
