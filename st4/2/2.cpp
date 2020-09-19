#include<iostream>

using namespace std;

int main(void){
    int x,y;
    cin>>x>>y;
    if(x==2018&&y==123456){
        cout<<"Welcome ! Nice to meet you!";
        return 0;
    }if(x==2018){
        cout<<"Password error!";
    }else{
        cout<<"User name error!";
    }
    return 0;
}