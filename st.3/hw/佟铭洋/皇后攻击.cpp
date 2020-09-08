#include<iostream>
#include<cstdio>
using namespace std;
 
int main(){
    long long x,y;
    cin>>x>>y;
    if(x>y) swap(x,y);
    long long answ=(x-1)*x*y+(y-1)*y*x+2*x*(x-1)*(y-x+1);
    answ+=4*(x-2)*(x-1)*x/3;
    cout<<answ;
    return 0;
}