#include<iostream>
#include<cstdio>
#include<cstring>

char avi[10]="!@#$%^&*(";
char squ[10][10];
using namespace std;
int main(void){
    int N=0;
    cin>>N;
    for(int a1=0;a1<N;a1++){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>squ[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int a=0;a<10;a++){
                    if(squ[i][j]=='.'){
                        if(i!=0&&squ[i-1][j]==avi[a]) continue;
                        if(i!=n-1&&squ[i+1][j]==avi[a]) continue;
                        if(j!=0&&squ[i][j-1]==avi[a]) continue;
                        if(j!=n-1&&squ[i][j+1]==avi[a]) continue;
                        squ[i][j]=avi[a];
                        break;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<squ[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}