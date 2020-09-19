#include<bits/stdc++.h>

using namespace std;

struct act{
    int st;
    int ed;
}a[1005];

bool cmp(act a1,act a2){
    return a1.ed<a2.ed;
}
int main(void){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].st>>a[i].ed;
    }
    sort(a,a+n,cmp);
    int t=a[0].ed;
    int cnt=1;
    for(int i=1;i<n;i++){
        if(a[i].st>=t){
            cnt++;
            t=a[i].ed;
        }
    }
    cout<<cnt;
    return 0;
}