#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main(){
    int n,avgScore,classRank,wenti,highest,highestm=0;
    char XUE;
    int money[100];
    for(int i=0;i<100;i++){
        money[i]=0;
    }
    string names[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>names[i]>>avgScore>>classRank>>XUE>>wenti;
        if(avgScore>80&&wenti>=1){
            money[i]+=3000;
        }
        if(avgScore>85&&classRank>80){
            money[i]+=4000;
        }
        if(avgScore>90){
            money[i]+=2000;
        }
        if(classRank>80&&XUE=='Y'){
            money[i]+=850;
        }
    }
    for(int i=0;i<n;i++){
        if(money[i]>highestm){
            highestm=money[i];
            highest=i;
        }
    }
    cout<<names[highest]<<" "<<money[highest];
}