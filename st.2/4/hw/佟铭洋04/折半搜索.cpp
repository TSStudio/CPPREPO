#include<bits/stdc++.h>

#define go(i,u,v) for(register int i=u;i<=v;i++)
#define M 3375001//最大可能的值

using namespace std;

int k[10],p[10],n,m,d1[M],d2[M],n1,n2,t1,t2,ans;

int read(){//数据输入
    int a=0,b=1;
    char c=getchar();
    while(c<'0'||c>'9') {if(c=='-') b=-1;c=getchar();}
    while(c>='0'&&c<='9') {a=(a<<3)+(a<<1)+c-'0';c=getchar();}
    return a*b;//返回输入的数字
}
int ksm(int x,int y){
  int s=1;
  while(y>0) {if(y&1) s*=x;x*=x;y>>=1;}
  return s;
}
void dfs1(int now,int sum){//折半深搜（第一部分）
    if(now>n1){d1[++t1]=sum; return;}
    go(i,1,m) dfs1(now+1,sum+k[now]*ksm(i,p[now]));
}
void dfs2(int now,int sum){
    if(now>n2){d2[++t2]=sum; return;}//折半深搜（第二部分）
    go(i,1,m) dfs2(now+1,sum+k[now+n1]*ksm(i,p[now+n1]));
}
void work(){//实际运行以确定是否是解
    int r=t2;
    sort(d1+1,d1+t1+1);//将第一部分和第二部分排序
    sort(d2+1,d2+t2+1);
    go(l,1,t1) {
        int s1=1,s2=1;
        while(d1[l]+d2[r]>0&&r>0) r--;
        if(!r) break ;
        if(d1[l]+d2[r]!=0) continue ;
        while(d1[l+1]==d1[l]&&l<t1) s1++,l++;//遍历所有解
        while(d2[r-1]==d2[r]&&r>0) s2++,r--;
        ans+=s1*s2;
    }
}
int main(){
    n=read();
    m=read();
    n1=n/2;n2=(n+1)/2;
    go(i,1,n) k[i]=read(),p[i]=read();
    dfs1(1,0);
    dfs2(1,0);
    work();printf("%d",ans);
    return 0;
}