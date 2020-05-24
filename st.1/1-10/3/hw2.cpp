#include<iostream>
using namespace std;
int main(){
	float mass;
	cin>>mass;
	if(mass<=5){
		cout<<mass*3<<endl;
	}
	if(mass>5){
		cout<<15+((mass-5)*3*0.8)<<endl;
	}
	return 0;
}
