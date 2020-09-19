// 小美同学有一组大于零的整数，想要调出其中的质数来，请你编程帮她实现吧。
// 输入：第一行有一个大于零的整数n（0<n<100），表示小美有n个数。第二行依次输入n个正整数。
// 输出：这n个数当中的质数。
// 要求：使用函数调用
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
int main(void){
    int amountOfNumbers;
    cin>>amountOfNumbers;
    int a;
    for(int i=0;i<amountOfNumbers;i++){
        cin>>a;
        if(isPrime(a)){
            cout<<a<<" ";
        }
    }
    return 0;
}