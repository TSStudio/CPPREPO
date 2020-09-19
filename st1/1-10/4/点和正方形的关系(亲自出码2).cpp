#include <iostream>
using namespace std;
int main() {
	int x,y;
	cin>>x>>y;
	if(x<0) {
		x=-x;
	}
	if(y<0) {
		y=-y;
	}
	if(x<=1&&y<=1) {
		cout<<"yes"<<endl;
	} else {
		cout<<"no"<<endl;
	}
	return 0;
}

