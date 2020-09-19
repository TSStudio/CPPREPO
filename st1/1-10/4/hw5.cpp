#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
	double a,b,c,x1,x2,i,t;
	cin>>a>>b>>c;
	cout<<fixed<<setprecision(5);
	x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
	x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
	if(b*b==4*a*c){
		cout<<"x1=x2="<<x1;
	}else if(b*b>4*a*c){
		cout<<"x1="<<x1<<";x2="<<x2;
	}else if(b*b<4*a*c){
		i=sqrt(4*a*c-b*b) / (2*a);
		t=-b / (2*a);
		if(i>1){
			cout<<"x1="<<t<<"+"<<i<<"i;x2="<<t<<-i<<"i";
		}else if(i<1){
			cout<<"x1="<<t<<i<<"i;x2="<<t<<"+"<<-i<<"i";
		}else{
			cout<<"x="<<t;
		}
	}
	return 0;
}
