#include<cstdio>
#include<iostream>
#include<cstring>
 
using namespace std;
 
const int maxn=101;
char s[maxn][maxn];
int n,m;
int a[]={ 0,0,-1,1,1,1,-1,-1};
int b[]={ 1,-1,0,0,-1,1,1,-1};//a，b数组实现移动
 
void dfs(int x,int y){
	for (int k=0;k<8;k++){
		if (x+a[k]>=0&&x+a[k]<n&&y+b[k]>=0&&y+b[k]<m&&s[x+a[k]][y+b[k]]=='W'){
			s[x+a[k]][y+b[k]]='.';
			dfs(x+a[k],y+b[k]);
		}
	}
}
 
int main(){
	int sum=0;
	scanf("%d%d",&n,&m);
		getchar();
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%c",&s[i][j]);
			}
			getchar();
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(s[i][j]=='W'){
					dfs(i,j);
					sum++;
				}
			}
		}
		printf("%d\n", sum);
	return 0;
}