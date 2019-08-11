#include<iostream>  
#include<iomanip>  
#include<cstring>  
#include<cmath>  
#include<string>  
using namespace std;  
int main() {  
    string str;  
    int c=0;  
    char h;  
    cin>>h>>str;  
    for (int i=0;i<str.length();i++){  
        if(str[i]==h||str[i]==h+32||str[i]==h-32){  
            c++;  
            continue;  
        }  
    }  
    cout<<endl<<c;  
    return 0;  
}  