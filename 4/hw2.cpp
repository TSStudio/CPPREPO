#include<iostream>
using namespace std;
int main(){
	int a;
	bool temp=false;
	cin>>a;
	if(a%3==0){
		cout<<"3";
		temp=true;
	}
	if((a%5==0)&&temp){
		cout<<" 5";
	}
	if((a%5==0)&&!temp){
		cout<<"5";
		temp=true;
	}
	if((a%7==0)&&temp){
		cout<<" 7";
	}
	if((a%7==0)&&!temp){
		cout<<"7";
	}
	if((a%3!=0)&&(a%5!=0)&&(a%7!=0)){
		cout<<"n";
	}
	return 0;
}
