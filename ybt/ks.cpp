#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

ull fastpow(ull base,ull in){
    if(in==0)return 1;
    if(in==1)return base;
    if(in==2)return base*base;
    if(in%2==0){
        ull a=fastpow(base,in/2);
        return a*a%200907;
    }
    ull a=fastpow(base,in/2);
    return a*a*base%200907;
}
bool isa(ull a,ull b,ull c){
    if(b-a==c-b) return true;
    return false;
}
int main(void){
    int grps=0;
    cin>>grps;
    for(int i=0;i<grps;i++){
        ull a,b,c,k;
        cin>>a>>b>>c>>k;
        if(isa(a,b,c)){
            cout<<(a+(k-1)%200907*(b-a)%200907)%200907<<endl;
            continue;
        }else{
            cout<<a%200907*fastpow((b/a)%200907,k-1)%200907<<endl;
            continue;
        }
    }
    return 0;
}