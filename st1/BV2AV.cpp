#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>

using namespace std;

int main(void){
    //7xwKC
    //-->
    //170001
    string x;
    cin>>x;
    int sum=0;
    for(int i=0;i<x.length();i++){
        sum+=pow(52,i)*(char(x[x.length()-i-1])-'0');
    }
    cout<<sum;
    return 0;
}