#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int money;
    double tax;
    cin>>money;
    if(money>=10000){
        tax=money*0.05;
    }else if(money>=5000){
        tax=money*0.03;
    }else if(money>=1000){
        tax=money*0.02;
    }else{
        tax=0;
    }
    cout<<fixed<<setprecision(0)<<tax<<endl;
    system("pause");
    return 0;
}