#include <iostream>
using namespace std;
int main() {
	double x;
	cin >> x;
	if(x <= 15) {
		cout << int(x*6+0.5);
	} else {
		cout << int((x-15)*9+15*6+0.5);
	}
	return 0;
}

