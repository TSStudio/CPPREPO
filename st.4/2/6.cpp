#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(void){
    int year;
    cin>>year;
    if(year%100==0){
        if(year%400==0){
            cout<<"L";
        }else{
            cout<<"N";
        }
        return 0;
    }
    if(year%4==0){
        cout<<"L";
        return 0;
    }
    cout<<"N";
    return 0;
}