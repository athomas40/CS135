#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> a, vector<int> b);

vector<int> merge(vector<int> a, vector<int> b) {
	int newsize = a.size() + b.size();
	vector<int> m;
	int big;
	if(a.size() > b.size()) {
		big = a.size();
	}
	else {
		big = b.size();
	}
	for(int i=0;i<big;i++) {
		if ((a.size()-1) < i) {
			m.push_back(b[i]);
		}
		else if((b.size()-1) < i) {
			m.push_back(a[i]);
		}
		else {
			m.push_back(a[i]);
			m.push_back(b[i]);
		}
		
	}
	return m;
}

int main() {
	vector<int> a = {1,4,9,16};
	vector<int> b = {9,7,4,9,11};
	vector<int> mergev = merge(a,b);
	for (int i=0;i<mergev.size();i++) {
		cout << mergev[i] << " ";
	}
	cout << endl;
}