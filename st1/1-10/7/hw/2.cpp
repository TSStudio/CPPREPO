#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int cur,a,b,c,res;
    for(cur=100;cur<1000;cur++){
        a=cur/100;
        b=cur/10%10;
        c=cur%10;
        res=pow(a,3)+pow(b,3)+pow(c,3);
        if(res==cur){
            cout<<cur<<" ";
        }
    }
    system("pause");
}