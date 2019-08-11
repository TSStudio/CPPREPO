#include<iostream>    
#include<string>  
using namespace std;  
int main() {  
    string str;  
    int c=0;  
    getline(cin,str);  
    for (int i=0;i<str.length();i++){  
        if(str[i]>='0'&&str[i]<='9'){  
            c++;  
            continue;  
        }else{  
            cout<<str[i];  
        }  
    }  
    cout<<endl<<c;  
    return 0;  
}  