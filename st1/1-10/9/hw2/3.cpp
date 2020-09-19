#include<iostream>

using namespace std;

int main(){
    int t=7,bnc,c;
    for(int a=0;a<=t;a++){
        bnc=t-a;
        for(int b=0;b<=bnc;b++){
            c=bnc-b;
            if(!(a<=b&&b<=c)) continue;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
    }
    return 0;
}