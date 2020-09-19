#include<iostream>

using namespace std;

int main(void){
    int x,y;
    cin>>x;
    if(x<1){
        cout<<x;
        return 0;
    }
    cout<<(x<10?(2*x-1):(3*x-11));
    return 0;
}