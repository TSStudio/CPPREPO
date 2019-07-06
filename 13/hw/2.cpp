#include<iostream>
#include<string>

using namespace std;
char ecflag(char flag){
    if(flag>='A'&&flag<='Z'){
        return flag+32;
    }else{
        return flag-32;
    }
}
int main(){
    string str;
    int sum=0;
    char flag;
    cin>>flag>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]==flag||str[i]==ecflag(flag)){
            sum++;
        }
    }
    cout<<endl<<sum;
    return 0;
}