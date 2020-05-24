#include<iostream>

using namespace std;

int e[11][11];

/**
 * dots 顶点数量
 * connections 边的数量
 */
int dots,connections;
/**
 * 顶点和边的权值
 */
int p,q;
/**
 * 假的无穷大
 */
int inf=1001;

int main(void){
    cin>>dots>>connections;
    //init array e
    for(int i=1;i<=dots;i++){
        for(int j=1;j<=dots;j++){
            if(i==j){
                e[i][j]=1;
            }else{
                e[i][j]=0;
            }
        }
    }
    //边权值初始化IO操作
    for(int i=1;i<connections;i++){
        cin>>p>>q;
        e[p][q]=1;
        e[q][p]=1;
    }
    //floyd algorithm
    //O(n^3)
    for(int k=1;k<=dots;k++){
        for(int i=1;i<=dots;i++){
            for(int j=1;j<=dots;j++){
                e[i][j]=e[i][j]||e[i][k]&&e[k][j];
            }
        }
    }
    for(int i=1;i<=dots;i++){
        for(int j=1;j<=dots;j++){
            cout<<e[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}