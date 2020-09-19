#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

ull m;
ull fpow(ull base,ull in){
    if(in==0)return 1;
    if(in==1)return base;
    if(in==2)return base*base;
    if(in%2==0){
        ull a=fpow(base,in/2);
        return a*a%m;
    }
    ull a=fpow(base,in/2);
    return a*a*base%m;
}
int main(void){
    ull a,b;
    cin>>a>>b>>m;
    cout<<fpow(a,b)%m;
    return 0;
}