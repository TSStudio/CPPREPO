#include<iostream>
#include<iomanip>
#include<cmath>
  
using namespace std;

int main(){
    double v,r,pi=3.14;
    cin>>r;
    v=pow(r,3)*4/3*pi;
    cout<<fixed<<setprecision(3)<<v<<endl;
    system("pause");
    return 0;
}