#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn = 10000;
int f[maxn];
int w[maxn],val[maxn];
void solve(int n,int m){
	memset(f,0,sizeof f);
	for(int i = 1;i <= n;i++){
		for(int v = m;v > 0;v--){
			if(v >= w[i])
				f[v] = max(f[v],f[v-w[i]]+val[i]);
		}
	}
	printf("%d\n",f[m]);
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i = 1;i <= n;i++) scanf("%d%d",w+i,val+i);
	solve(n,m);
	return 0;
}