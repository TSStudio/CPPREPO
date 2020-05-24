#include<iostream>
using namespace std;
int m,n,w[1000],c[1000],f[1000][1000];
int main(){
    cin>>m>>n;
    for(int i=1;i<=n;i++){
        cin>>w[i]>>c[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            //第i件物品能不能放
            if(j>=w[i]){
                //如果能放，要不要放
                //          不放第i件  放第i件
                f[i][j]=max(f[i-1][j],f[i-1][j-w[i]]+c[i]);
            }else{
                //如果不能放
                f[i][j]=f[i-1][j];
            }
        }
    }
    cout<<f[n][m];
    return 0;
}