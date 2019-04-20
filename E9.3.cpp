//A circuit for controlling a hallway light that has switches at both ends of the hallway.

#include <iostream>
using namespace std;

class Switch {
public:
	int get_first_switch_state(); // 0 for down, 1 for up
	int get_second_switch_state();
	int get_lamp_state(); // 0 for off, 1 for on
	void toggle_first_switch();
	void toggle_second_switch();
	Switch();
private:
	int state;
	int swtich_first;
	int switch_second;
};
Switch::Switch() {				//default
	state = 0;
	swtich_first = 0;
	switch_second = 0;
}
int Switch::get_first_switch_state() {
	return swtich_first;
}
int Switch::get_second_switch_state() {
	return switch_second;
}
int Switch::get_lamp_state() {
	return state;
}
void Switch::toggle_first_switch() {
	if (swtich_first==0) {
		swtich_first = 1;
	}
	else {
		swtich_first = 0;
	}
	if (state==0) {
		state = 1;
	}
	else {
		state = 0;
	}
}
void Switch::toggle_second_switch() {
	if (switch_second==0) {
		switch_second = 1;
	}
	else {
		switch_second = 0;
	}
	if (state==0) {
		state = 1;
	}
	else {
		state = 0;
	}
}

int main() {
	Switch lamp;
	lamp.toggle_first_switch();
	lamp.toggle_second_switch();
	lamp.toggle_second_switch();
	cout << lamp.get_lamp_state() << endl;
	cout << lamp.get_second_switch_state() << endl;
	cout << lamp.get_first_switch_state() << endl;
	return 0;
}