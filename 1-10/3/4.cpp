#include<iostream>
using namespace std;
int main(){
	while(true){
		string user="test",pawd="123456";
		string usr1,pwd1;
		cin>>usr1>>pwd1;
		if(usr1==user&&pwd1==pawd){
			cout<<"Logged in as "<<user<<endl;
		}else if(usr1==user){
			cout<<"Wrong Password!"<<endl;
		}else{
			cout<<"Wrong Username!"<<endl;
		}
	}
	return 0;
}
