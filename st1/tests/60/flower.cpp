#include<iostream>
#include<cstdio>

using namespace std;

int main(void){
    freopen("flower.in","r",stdin);
    freopen("flower.out","w",stdout);
    long long b[101][101],n,m,a[101];
    cin>>n>>m;
    for(int i=0;i<=m;i++) b[i][0]=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            for(int k=j;k>=j-a[i];k--){
                if(k>=0) b[i][j]+=b[i-1][k]%1000007;b[i][j]%=1000007;
                else break;
            }
        }
    }
    cout<<b[n][m]<<endl; 
    fclose(stdin);
    fclose(stdout);
    return 0;
}