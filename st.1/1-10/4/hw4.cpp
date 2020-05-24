#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int kwh;
	double res;
	cin>>kwh;
	if(kwh<=150){
		res=kwh*0.4463;
	}if(kwh>150&&kwh<=400){
		res=(kwh-150)*0.4663+66.945;
	}if(kwh>400){
		res=(kwh-400)*0.5663+183.52;
	}
	cout<<fixed<<setprecision(1)<<res;
	return 0;
}
