#include <bits/stdc++.h> 

#define MAXN 10005

using namespace std;

int n,Min;
int ans[MAXN],temp[MAXN];//ans是最后结果，temp存状态
 
//递归处理
void dfs(int pos){
    if(pos >= Min)//如果当前的长度>=min就没必要再算了
        return;
    else{
        for(int i=0;i<pos;i++) {//看看所有可能性
            int t=temp[i]+temp[pos-1];
            if(t==n){//t = n说明到达末尾
                if(Min>pos){//判断最小值以及更新ans数组
                Min=pos;
                for(int k=0;k<Min;k++)
                    ans[k]=temp[k];//复制数组
                }
                return;
            }
            if(t<n){//小于就再搜
                temp[pos]=t;//t存入temp[pos]
                dfs(pos+1);
                temp[pos]=0;//恢复现场
            }
        }
    }
}

int main(){
    cin>>n;
    Min=MAXN;
    if(n>1) {//n大于1才搜索
        temp[0]=1;
        ans[0]=1;
        dfs(1);
        cout<<1;
        for(int i=1;i<Min;i++)
            cout<<" "<<ans[i];
    }
    else cout<<1;
    return 0;
}