#include<iostream>
using namespace std;
int main(){
	int a,& c=a;
	cin>>a;
	c=a*2;
	cout<<a;
}
