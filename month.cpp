#include <iostream>
using namespace std;
int main() {
	int year, month, leap = 0;	//leap = 1 means leap year
	cout << "Enter year: " << endl;
	cin >> year;
	cout << "Enter month: " << endl;
	cin >> month;
	//checks if year is divisible by 4
	//common year
	if (year % 4 != 0) {
		leap = 0;
	}
	//checks if year is divisible by 100
	//leap year
	else if (year % 100 != 0) {
		leap = 1;
	}
	//checks if year is divisible by 400
	//common year
	else if (year % 400 != 0) {
		leap = 0;
	}
	//leap year
	else {
		leap = 1;
	}

	//computes number of days in February
	if (month == 2) {
		cout << "29 days" << endl;
		if (leap == 0) {
			cout << "28 days" << endl;
		}
		else if (leap == 1) {
			cout << "29 days" << endl;
		}
	}
	//computes number of days for jan - july
	else if (month <= 7) {
		if (month % 2 == 0) {
			cout << "30 days" << endl;
		}
		else {
			cout << "31 days" << endl;
		}
	}
	//computes number of days for aug - dec
	else {
		if (month % 2 == 0) {
			cout << "31 days" << endl;
		}
		else {
			cout << "30 days" << endl;
		}
	}

	return 0;
}