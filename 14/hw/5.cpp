#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int answer=0,num=1;
    for(int i=0;i<a.length()-1;i++){
        if(a[i]>='0'&&a[i]<='9'){  
            answer+=(a[i]-'0')*num;  
            num++;
        }
    }
    answer%=11;    
    if(answer==(a[a.length()-1]-'0')||answer==10&&a[a.length()-1]=='X'){
        cout<<"Right";  
    }else{
        for(int i=0;i<a.length();i++){
            if(i<a.length()-1){
                cout<<a[i];
            }else if(i==a.length()-1&&answer!=10){
                cout<<answer;
            }else{
                cout<<'X';
            }
        }
    }
    return 0;
}