#include <bits/stdc++.h> 
#define N 100001

using namespace std;
typedef long long LL;//先写一下LL，省事，打字方便

LL a,b,best,ans[N],flag,limt,way[N];

void dfs(LL x, LL y, LL dep){
    LL l1,l2,xx,yy,i,j;
    l1 = max(way[dep - 1] + 1 , y / x);//把当前层数分母最小值找着
    l2 = min(y * (limt -dep + 1) / x , best - 1);//把当前层数分母最大值找着
    for(i=l1;i<=l2;i++){//进行遍历
        xx=x;yy=y;way[dep]=i;
        xx=xx*i-yy;//计算剩余的分子
        if(x < 0) continue;
        yy = yy * i;//计算剩余的分母
        if(dep < limt) dfs(xx,yy,dep + 1);
        if(i < best && xx == 0){//要是比刚才的方法还厉害就这样似的
            flag = 1 ; best = i;
            for(j=1;j<=limt;j++)ans[j]=way[j];//把答案重新整一遍
        }
    } 
}
int main(){
    cin>>a>>b;//先把数据扔进来
    cout<<a<<"/"<<b<<"=";//先把这些零七八碎的东西输出一下子，省着等会给忘咯
    flag=0;way[0]=1;best=99999999;//完了之后初始化
    while(flag==0){
        limt++; // 看看搜的层数能枚举成啥样
        dfs(a,b,1);//这回是正经的深搜
    }
    for(LL i = 1; i < limt ; i ++) cout <<"1/"<<ans[i]<<" + ";
    cout<<"1/"<<ans[limt];
}