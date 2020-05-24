#include<iostream>
#include<fstream>
using namespace std;
int main() {
	int n;
	float s;
	cin>>n;
	if(n<=3) {
		s=14;
	} else {
		s=14+(n-3)*2.3;
	}
	cout<<(int)(s+0.5);
	return 0;
}
