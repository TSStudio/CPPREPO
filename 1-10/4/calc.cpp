#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	while(true){
		cout<<"root: ";
		string a,b,c,d;
		cin>>a;
		if(a=="calc"){
			cin>>b>>c>>d;
			if(c=="+"){
				cout<<atoi(b.data())+atoi(d.data())<<endl;
			}
			if(c=="-"){
				cout<<atoi(b.data())-atoi(d.data())<<endl;
			}
			if(c=="*"){
				cout<<atoi(b.data())*atoi(d.data())<<endl;
			}
			if(c=="/"){
				cout<<atoi(b.data())/atoi(d.data())<<endl;
			}
		}
		if(a=="echo"){
			cin>>b;
			cout<<b<<endl;
		}
	}
	return 0;
}
