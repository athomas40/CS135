#include <iostream>
using namespace std;

int main(){
	int num, result = 0;
	char c;
	char prev_op = '+';

	cin >> num;
	while (cin >> c) {
		//checks for exponent
		if (c =='^') {
			num = num*num;
			cin >> c;
		}
		//checks for +
		if (prev_op == '+') {
			result += num;
		}
		//checks for -
		else if (prev_op == '-') {
			result -= num;
		}
		prev_op = c;
		cin >> num;
		//checks for ;
		if (prev_op == ';') {
			cout << result << endl;
			result = 0;
			prev_op = '+';
		}

	}
	return 0;
}