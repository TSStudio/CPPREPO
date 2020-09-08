#include<cstdio>
#include<iostream>
using namespace std;

int map[20][20];
int mapt[20][20];
int ans,n;
int proc(int inputnum){
	int cnt=0,temp,k;
	for(int i=1;i<=n;i++){
		temp=inputnum&1;
		inputnum=inputnum>>1;
		mapt[1][i]=temp;
		if(mapt[1][i]!=map[1][i])
		    if(temp==1) cnt++;
		        else return 0;
	}
	for(int i=2;i<=n;i++)
	    for(int j=1;j<=n;j++){
            k=mapt[i-1][j-1]+mapt[i-1][j+1]+mapt[i-2][j];
            if(k%2==1) mapt[i][j]=1;
            else mapt[i][j]=0;
	        if(mapt[i][j]!=map[i][j])  
		        if(mapt[i][j]==1) cnt++;
		        else return 0;
	    }
	if(cnt<ans) ans=cnt;
	return 0;
}
int main(){
	int nmax;
	ans=1000;
	cin>>n;
	nmax=1<<n-1;
	for(int i=1;i<=n;i++)
	    for(int j=1;j<=n;j++)
	   	    cin>>map[i][j];
	for(int i=0;i<=nmax;i++) proc(i);
	if(ans==1000) ans=-1;
    cout<<ans;
	return 0;
}