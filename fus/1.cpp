#include<iostream>
#include<cstdio>

using namespace std;

int a,b,c;

int main(){
    int a,b;
    char ch;
    cin>>a;
    while(cin>>ch>>b){
        if(ch=='-') b=0-b;
        a+=b;
    }
    cout<<a;
    return 0;
}