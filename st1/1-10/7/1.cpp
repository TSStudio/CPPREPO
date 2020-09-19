#include<iostream>
using namespace std;
int main(){
    int score=0,cnt=0;
    double sum=0;
    while(true){
        cin>>score;
        if(score==0){
            break;
        }
        sum+=score;
        cnt++;
    }
    double avg=sum/cnt;
    cout<<avg;
    system("pause");
}