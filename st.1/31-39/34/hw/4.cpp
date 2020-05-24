#include<iostream>
#include<string>

using namespace std;

char crypt(char a){
    if(a<'A'||(a>'Z'&&a<'a')||a>'z') return a;
    a+=3;
    if((a>'Z'&&a<'a')||a>'z') a-=26;
    return a;
}
int main(void){
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        str[i]=crypt(str[i]);
    }
    cout<<str;
    return 0;
}