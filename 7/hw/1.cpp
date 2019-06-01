#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int score,cnt=10,min=100,max=0;
    double sum=0;
    for(int i=0;i<cnt;i++){
        cin>>score;
        sum+=score;
        if(score>max){
            max=score;
        }
        if(score<min){
            min=score;
        }
    }
    sum-=max;
    sum-=min;
    double avg=sum/(cnt-2);
    cout<<fixed<<setprecision(3)<<avg;
    system("pause");
}