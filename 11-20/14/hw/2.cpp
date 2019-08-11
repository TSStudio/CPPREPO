#include<iostream>
#include<cstring>
#include<string>

using namespace std;

char KAISA(char c,int n){
    c+=n;
    if(c>'Z'&&c<'a'||c>'z'){
        c-=26;
    }
    return c;
}
int main(){
    string chara;
    getline(cin,chara);
    int n;
    cin>>n;
    for(int i=0;i<chara.length();i++){
        cout<<KAISA(chara[i],n);
    }
    return 0;
}