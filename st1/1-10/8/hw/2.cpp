#include<iostream>

using namespace std;

int main(){
    int f1=0,f2=1,f3=2,total=3,time;
    cin>>time;
    if(time==1){
        cout<<1<<endl<<1;
        return 0;
    }
    for(int i=2;i<time;i++){
        f1=f2;
        f2=f3;
        f3=(f1+f2)*3;
        total+=f3;
    }
    cout<<f3<<endl<<total;
    system("pause");
    return 0;
}