#include<iostream>
using namespace std;
int main(){
	int sc;
	cin>>sc;
	cout<<(char)((sc>=90)?65:(sc>=60?66:67));
	return 0;
}
