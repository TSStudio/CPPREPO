#include<iostream>
#include<cmath>

using namespace std;

int timespend(int orders[],int numsC){
    int time;
    int levelnow=0;
    for(int i=1;i<=numsC;i++){
        time+=abs(orders[i]-orders[i-1])*3+5;
    }
    return time;
}
int main(void){
    int numsC;
    int orders[100];
    for(;;){
        cin>>numsC;
        if(numsC==0){
            return 0;
        }
        orders[0]=0;
        for(int i=1;i<=numsC;i++){
            cin>>orders[i];
        }
        cout<<timespend(orders,numsC)<<endl;
    }
}