#include<iostream>
using namespace std;
int main(){
    int n,a,b,c,kgleft;
    bool flag=false;
    cin>>n;
    for(a=0;a<=10;a++){
        if(a*5>n) break;
        kgleft=n-(a*5);
        for(b=0;b<=4;b++){
            if(b*2>kgleft) continue;
            c=kgleft-(b*2);
            if(c>8) continue;
            cout<<a<<" "<<b<<" "<<c<<endl;
            flag=true;
        }
    }
    if(!flag){
        cout<<"NO";
    }
    return 0;
}