#include<bits/stdc++.h>

using namespace std;

char a[201];
char temporary[201];
int src[201];
int len;
void dfs(int step){
    char c=0;
    if(step==len){
        printf("%s\n",temporary);
        return;
    }
    for(int i=0;i<len;i++){
        if(!src[i]&&c!=a[i]){
            temporary[step] = a[i];
            c = temporary[step];
            src[i]=1;
            dfs(step+1);
            src[i]=0;
        }
    }
}
int main(){
    gets(a);
    len=strlen(a);
    sort(a,a+len);
    dfs(0);
    return 0;
}