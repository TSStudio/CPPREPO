#include <iostream>
#include "windows.h"
using namespace std;
int main(){
    double mins,secs,tnow;
    for(;;){
        cout<<"������ʱ��(��)";
        cin>>mins;
        if(mins<0){
            cout<<endl<<"ʱ�䲻�Ϸ�";
            continue;
        }
        secs=mins*60;
        cout<<"����ʱ"<<secs<<"��";
        while(tnow<=secs){
            system("cls");
            cout<<"����ʱ"<<secs-tnow<<"��";
            tnow++;
            Sleep(1000);
        }
        tnow=0;
        cout<<endl<<"ʱ�䵽"<<endl;
    }
}