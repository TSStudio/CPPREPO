#include<iostream>
using namespace std;
int main(){
	int s;
	cin>>s;
	double bikeTime=27+23+(s/3.0);
	double walkTime=s/1.2;
	if(bikeTime>walkTime){
		cout<<"Walk"<<endl;
	}
	if(bikeTime<walkTime){
		cout<<"Bike"<<endl;
	}
	if(bikeTime==walkTime){
		cout<<"All"<<endl;
	}
	return 0;
}
