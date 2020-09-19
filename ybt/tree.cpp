#include<bits/stdc++.h>

using namespace std;

struct wantlist{
    int b,e,t;
}wl[30005];

bool blks[30005];
bool cmp(wantlist a1,wantlist a2){
    return a1.e<a2.e;
}
int stattrees(int from,int to){
    int s=0;
    for(int i=from;i<=to;i++){
        if(blks[i]) s++;
    }
    //cout<<"  found tree in range"<<from<<"-"<<to<<":"<<s<<endl;
    return s;
}
int main(void){
    int n,h;
    cin>>n>>h;
    for(int i=0;i<h;i++){
        cin>>wl[i].b>>wl[i].e>>wl[i].t;
    }
    sort(wl,wl+h,cmp);
    for(int i=0;i<h;i++){
        //cout<<"processing request #"<<i<<" "<<wl[i].b<<" "<<wl[i].e<<" "<<wl[i].t<<endl;
        int trs=stattrees(wl[i].b,wl[i].e);
        if(trs>=wl[i].t) continue;
        int tnbp=wl[i].t-trs;
        for(int j=wl[i].e;j>=wl[i].b;j--){
            if(tnbp==0) break;
            if(!blks[j]){
                blks[j]=true;
                tnbp--;
            }
        }
    }
    cout<<stattrees(1,n);
    return 0;
}