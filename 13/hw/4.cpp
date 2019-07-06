#include<iostream>
#include<string>

using namespace std;

int main(){
    bool flag;
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]==str[str.length()-i-1]){
            flag=true;
        }else{
            flag=false;
            cout<<"no";
            break;
        }
    }
    if(flag){
        cout<<"yes";
    }
    return 0;
}