#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    getline(cin,str);
    int time[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char order[26];
    int strkind=0;
    for(int i=0;i<str.length();i++){
        time[str[i]-97]++;
        if(time[str[i]-97]==1){
            order[strkind]=str[i];
            strkind++;
        }
    }
    bool flag=true;
    for(int i=0;i<26;i++){
        if(time[order[i]-97]==1){
            cout<<order[i];
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"no";
    }
    return 0;
}