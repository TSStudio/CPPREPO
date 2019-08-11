#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int cnt,age;
    double sum=0,avg;
    cin>>cnt;
    for(int i=0;i<cnt;i++){
        cin>>age;
        sum+=age;
    }
    avg=sum/cnt;
    cout<<fixed<<setprecision(2)<<avg;
    system("pause");
}