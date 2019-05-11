//Aleena Thomas
//E5.12

using namespace std;
#include <iostream>
#include <math.h>

double distance(double x1, double x2, double y1, double y2);
void midpoint(double x1, double x2, double y1, double y2, double& xmid, double& ymid);
void slope(double x1, double x2, double y1, double y2, bool& vertical, double& s);

double distance(double x1, double x2, double y1, double y2) {
	double x = x2 - x1;
	x = x*x;
	double y = y2 - y1;
	y = y*y;
	double sq = sqrt(x + y);		//square root((x2-x1)^2 + (y2-y1)^2)
	return sq;
}
void midpoint(double x1, double x2, double y1, double y2, double& xmid, double& ymid) {
	xmid = (x1 + x2) / 2;
	ymid = (y1 + y2) / 2;
}
void slope(double x1, double x2, double y1, double y2, bool& vertical, double& s) {
	int y = y2 - y1;
	int x = x2 - x1;
	if ((y == 0) || (x == 0)) {		//if slope is vertical sets vertical true
		vertical = true;
	}
	else {							//else sets s to slope
		vertical = false;
		s = y / x;
	}
}
int main() {
	double x1 = 2;					//point (2,2)
	double y1 = 2;
	double x2 = 4;					//point (4,4)
	double y2 = 4;
	double xmid, ymid;
	bool vertical;
	double s;
	double d = distance(x1, x2, y1, y2);
	cout << "Distance: " << d << endl;
	midpoint(x1, x2, y1, y2, xmid, ymid);
	cout << "Midpoint: (" << xmid << "," << ymid << ")" << endl; 
	slope(x1, x2, y1, y2, vertical, s);
	if (vertical == true) {
		cout << "Vertical Slope" << endl;
	}
	else {
		cout << "Slope: " << s << endl;
	}
	return 0;
}