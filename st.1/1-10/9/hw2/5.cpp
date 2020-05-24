#include<iostream>
using namespace std;
int main(){
    int n,a,b,c,mleft,havea,haveb,havec;
    bool flag=false;
    cin>>havea>>haveb>>havec>>n;
    for(a=0;a<=havea;a++){
        if(a*5>n) break;
        mleft=n-(a*5);
        for(b=0;b<=haveb;b++){
            if(b*2>mleft) continue;
            c=mleft-(b*2);
            if(c>havec) continue;
            cout<<a<<" "<<b<<" "<<c<<endl;
            flag=true;
        }
    }
    if(!flag){
        cout<<0;
    }
    return 0;
}