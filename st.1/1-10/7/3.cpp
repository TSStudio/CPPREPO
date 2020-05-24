#include<iostream>
using namespace std;
int main(){
    int cur;
    for(int i=0;;i++){
        cur=i*i;
        if(cur<1000){
            continue;
        }
        if(cur>=10000){
            break;
        }
        if(cur/1000!=cur/100%10){
            continue;
        }
        if(cur%100/10!=cur%10){
            continue;
        }
        cout<<cur<<" ";
    }
    system("pause");
}