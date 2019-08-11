#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    char from,target;
    getline(cin,str);
    cin>>from>>target;
    for(int i=0;i<str.length();i++){
        char a=str[i];
        if(str[i]==from){
            str[i]=target;
        }
        a=str[i];
    }
    cout<<str;
    return 0;
}