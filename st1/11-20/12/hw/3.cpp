#include<iostream>

using namespace std;
int det(int x1,int x2){
    //正负判断 1=A 2=B 3=平
    if(x1==x2){
        //平
        return 3;
    }
    if(x1==0){
        if(x2==5){
            return 2;
        }else{
            return 1;
        }
    }
    if(x1==2){
        if(x2==0){
            return 2;
        }else{
            return 1;
        }
    }
    if(x2==0){
        return 1;
    }else{
        return 2;
    }
    return 4;
}

int main(){
    int round,Aroll,Broll;
    int Around[100],Bround[100];
    cin>>round>>Aroll>>Broll;
    for(int i=0;i<Aroll;i++){
        cin>>Around[i];
    }
    for(int i=0;i<Broll;i++){
        cin>>Bround[i];
    }
    int Awin=0,Bwin=0;
    //0表示“石头”，2表示“剪刀”，5表示“布”
    //正负判断 1=A 2=B 3=平 det(x1,x2)
    int round4A=0,round4B=0;
    for(int i=0;i<round;i++){
        if(round4A>=Aroll){
            round4A=0;
        }
        if(round4B>=Broll){
            round4B=0;
        }
        int situation=det(Around[round4A],Bround[round4B]);
        if(situation==1){
            Awin++;
        }
        if(situation==2){
            Bwin++;
        }
        round4A++;
        round4B++;
    }
    if(Awin>Bwin){
        cout<<"A";
    }
    if(Awin<Bwin){
        cout<<"B";
    }
    if(Awin==Bwin){
        cout<<"draw";
    }
}
