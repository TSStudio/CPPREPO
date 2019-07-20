#include<iostream>

using namespace std;

bool isPrime(int x){
    int half=x/2;
    if(x==1||x==4){
        return false;
    }
    for(int i=3;i<=half+1;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
bool isPalindrome(int x){
    //最大是999 最小是5
    //先拆解
    if(x<10){
        //一位数不考虑 肯定是
        return true;
    }
    if(x<100&&(x%10==x/10)){
        return true;
    }
    if(x>100&&(x%10==x/100)){
        return true;
    }
    return false;
}
int main(void){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i)&&isPalindrome(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}