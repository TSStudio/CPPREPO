#include<bits/stdc++.h>

using namespace std;

int nums[50005];
int inprocess[50005];

bool cmp(long long a,long long b){
    return a>b;
}
int main(void){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        inprocess[i]=nums[i];
    }
    //getmax
    for(int i=0;i<n-1;i++){
        sort(inprocess+i,inprocess+n);
        inprocess[i+1]=inprocess[i]*inprocess[i+1]+1;
    }
    int max=inprocess[n-1];
    for(int i=0;i<n;i++){
        inprocess[i]=nums[i];
    }
    //getmin
    sort(inprocess,inprocess+n);
    for(int i=0;i<n-1;i++){
        inprocess[n-i-2]=inprocess[n-i-1]*inprocess[n-i-2]+1;
    }
    cout<<max-inprocess[0];
    return 0;
}