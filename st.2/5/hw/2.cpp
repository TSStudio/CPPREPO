#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#define maxn 1000005
#define inf 0x33333333
#define ull unsigned long long
using namespace std;
char str[maxn];
ull q[maxn],ha[maxn];
int ins[maxn];
int m,cnt;
void setins(){
    cnt=0; 
    m=strlen(str+1);
    for(int k=1;k<=sqrt(m);k++){
        if(k*(m/k)==m){
            ins[++cnt]=k;
            ins[++cnt]=m/k;
        }
    }
    sort(ins+1,ins+1+cnt);
}
void setb(int b){
    q[0]=1;
    for(int i=1;i<=m;i++){
        q[i]=q[i-1]*b;
    }
}
void sethash(int b){
    ha[0]=0;
    for(int i=1;i<=m;i++){
        ha[i]=ha[i-1]*b+str[i]-'A'+1;
    }
}
bool findhash(int i){
    int len=ins[i];
    for(int j=1;j+len-1<=m;j+=len){
        if(ha[len]!=ha[j+len-1]-ha[j-1]*q[len])return false;
    }
    return true;
}
int main(){
    while(1){
        cin>>str+1;
        if(str[1]=='.')break;
        else{
            setins();
            setb(107);
            sethash(107);
            for(int i=1;i<=cnt;i++){
                if(!findhash(i))continue;
                else{
                    cout<<m/ins[i];
                    break;
                }
            }
        }
    }
    return 0;
}