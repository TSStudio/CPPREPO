#include <iostream>
#include "windows.h"
using namespace std;
int main(){
    double mins,secs,tnow;
    for(;;){
        cout<<"请输入时间(分)";
        cin>>mins;
        if(mins<0){
            cout<<endl<<"时间不合法";
            continue;
        }
        secs=mins*60;
        cout<<"倒计时"<<secs<<"秒";
        while(tnow<=secs){
            system("cls");
            cout<<"倒计时"<<secs-tnow<<"秒";
            tnow++;
            Sleep(1000);
        }
        tnow=0;
        cout<<endl<<"时间到"<<endl;
    }
}