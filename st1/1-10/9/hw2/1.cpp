#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    for(a=1;a<=3;a++){
        for(b=0;b<=3;b++){
            for(c=0;c<=3;c++){
                if(a==b||b==c||a==c) continue;
                else cout<<a*100+b*10+c<<" ";
            }
        }
    }
    return 0;
}