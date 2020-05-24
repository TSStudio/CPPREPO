#include<iostream>

using namespace std;

int main(void){
    int m,n,t;
    cin>>n>>m;
    t=2*m;
    for(int i=m+1;i<=n;i++){
        t+=i;
    }
    cout<<t;
    return 0;
}