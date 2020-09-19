#include<iostream>

using namespace std;

int res,b,k;
void dfs(int begin,int s,int summary){
    if(s==1){
    	res++;
	    return;//边界
	}
    for(int i=begin;i<=summary/s;i++)
    	dfs(i,s-1,summary-i);
}
int main(){
	cin>>b>>k;
	dfs(1,k,b);
    cout<<res;
    return 0;
}