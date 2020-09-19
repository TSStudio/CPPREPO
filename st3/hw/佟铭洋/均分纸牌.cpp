#include<iostream>
#include<cstdio>

using namespace std;

int a[10005];
int main(){
	int n,to=0,i,j,sp=0;
	cin>>n;j=n;i=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		to+=a[i];
	}
	for(int i=1;i<=n;i++){
		a[i]-=to/n;
	}
	while(a[i]==0&&i<n) i++;
	while(a[j]==0&&j>1) j--;
	while(i<j){
		a[i+1]+=a[i];
		a[i]=0;
		sp++;
		i++;
		while(a[i]==0&&i<j) i++;
	}
	cout<<sp;
    return 0;
}