#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int highestScore=1,lowestScore=10,score,total=0;
    for(int i=0;i<10;i++){
        cin>>score;
        total+=score;
        if(score>highestScore){
            highestScore=score;
        }
        if(score<lowestScore){
            lowestScore=score;
        }
    }
    total=total-highestScore-lowestScore;
    cout<<"最高分:"<<highestScore<<" 最低分:"<<lowestScore<<endl;
    cout<<"平均分:";
    cout<<fixed<<setprecision(2)<<total/8.0;
    return 0;
}