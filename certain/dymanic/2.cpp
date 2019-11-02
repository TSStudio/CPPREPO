#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n,m;
const int maxn = 1100;
int val[maxn];
long long f[maxn*10];
void solve(){
    memset(f,0,sizeof f);
    f[0] = 1;
    for(int i = 1;i <= n;i++){
        for(int j = m;j > 0;j--){
            for(int k = 1;k <= j/val[i];k++){
                f[j] += f[j-k*val[i]];
            }
        }
    }
    printf("%lld\n",f[m]);
}
int main(){
    scanf("%d%d",&n,&m);
    for(int i = 1;i <= n;i++) scanf("%d",val+i);
    solve();
    return 0;
}