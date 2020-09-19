#include<iostream>
using namespace std;
int main(){
	int sc;
	cin>>sc;
	if(sc>=90){
		cout<<"A"<<endl;
	}else if(sc>=80){
		cout<<"B"<<endl;
	}else if(sc>=70){
		cout<<"C"<<endl;
	}else if(sc>=60){
		cout<<"D"<<endl;
	}else{
		cout<<"F"<<endl;
	}
	return 0;
}
