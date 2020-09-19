#include <iostream>
using namespace std;
int main() {
	char c1,c2,c3,max,min;
	cin>>c1>>c2>>c3;
	if(c1>c2) {
		max=c1;
		min=c2;
	} else {
		max=c2;
		min=c1;
	}
	if(max>c3) {
		max=max;
	} else {
		max=c3;
	}
	if(min>c3) {
		min=c3;
	} else {
		min=min;
	}
	cout<<max<<" " << min << endl;
	return 0;
}
