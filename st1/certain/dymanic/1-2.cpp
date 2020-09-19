#include<iostream>

using namespace std;

int maxweight,count;
int stuffW[100]={},stuffV[100]={};
int results[100][100]={};
int main(void){
    cin>>count>>maxweight;
    for(int i=1;i<=count;i++) cin>>stuffW[i]>>stuffV[i];
    for(int i=1;i<=count;i++){
        for(int j=1;j<=maxweight;j++){
            if(stuffW[i]<=maxweight){
                results[i][j]=max(results[i-1][j-stuffW[i]]+stuffV[i],results[i-1][j]);
            }else{
                results[i][j]=results[i-1][j];
            }
        }
    }
    cout<<results[maxweight][count];
    return 0;
}