#include<iostream>
#include<algorithm>

using namespace std;

int bones[1005][2];
int solutions[1005][1005];
int main(void){
    int T;
    cin>>T;
    for(int Tn=0;Tn<T;Tn++){
        int N,V;
        //bones[n][0] the value of bone number N
        //bones[n][1] the volume of bone number N
        cin>>N>>V;
        for(int i=1;i<=N;i++){
            cin>>bones[i][0];
        }
        for(int i=1;i<=N;i++){
            cin>>bones[i][1];
        }
        for(int i=1;i<=N;i++){
            for(int j=1;j<=V;j++){
                if(bones[i][1]<=j){
                    solutions[i][j]=max(solutions[i-1][j],solutions[i-1][j-bones[i][1]]+bones[i][0]);
                }else{
                    solutions[i][j]=solutions[i-1][j];
                }
            }
        }
        cout<<solutions[N][V]<<endl;
        for(int i=0;i<=N;i++){
            for(int j=0;j<=V;j++){
                solutions[i][j]=0;
            }
        }
    }
    return 0;
}