/*
Aleena Thomas
CSCI-136
Genady Maryash 
Lab5D
This program checks i a number is a twin prime.
*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d);
bool isPrime(int n);
bool isTwinPrime(int n);

bool isDivisibleBy(int n, int d) {
	if (d!=0 && n % d == 0) {
		return true; //true if divisible by 0 or d is equal to 0
	}
	else {
		return false;
	}
}

bool isPrime(int n) {
	if (n < 2) {
		return false;
	}
	for (int i=2;i<(n-1);i++) {
		//calls function isDivisible to check if its divisible
		if (isDivisibleBy(n,i)) {
			return false;
		}
	}
	return true;
}
//checks if it's a twin prime
bool isTwinPrime(int n) {
	if (isPrime(n)) {
		if (isPrime(n+2) || isPrime(n-2)) {
			return true;
		}
		return false;
	}
}

int main() {
	int num;
	cout << "Enter number: " << endl;
	cin >> num;
	bool x = isTwinPrime(num);
	string ans;
	//defines x as a string with bool value
	if (x == true) {
		ans = "true";
	}
	else {
		ans = "false";
	}
	cout << ans << endl;
	
	return 0;
}