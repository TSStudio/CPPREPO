#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
const int maxn = 10010;

map<pair<int,int>, bool>existed;
int c[maxn], d[maxn];

int main(){
    int n,p,hei,m;
    cin>>n>>p>>hei>>m;
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        if(a>b)swap(a,b);
        if(existed[make_pair(a,b)])continue;
        d[a+1]--;
        d[b]++;
        existed[make_pair(a,b)]=1;
    }
    for(int i=1;i<=n;i++){
        c[i]=c[i-1]+d[i];
        cout<<hei+c[i]<<endl;
    }
    return 0;
}