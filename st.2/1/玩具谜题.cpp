#include<cstdio>
#include<iostream>
#define maxn 100005
using namespace std;
struct node
{
    int direct;
    string name;
}a[maxn];
int main(){
    int n,m,x,y;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i].direct>>a[i].name;
    int local=0;
    for(int i=1;i<=m;i++){
        int as,s;
        cin>>as>>s;
        if(a[local].direct^as==0){
            local=local-s;
        }else{
            local=local+s;
        }
        //处理超界情况
        if(local<0){
            local+=n;
        }
        if(local>=n){
            local-=n;
        }
    }
    cout<<a[local].name;
    return 0;
}