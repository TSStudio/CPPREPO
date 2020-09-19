#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
    freopen("title.in","r",stdin);
    freopen("title.out","w",stdout);
    char a;
    int cnt=0;
    while(cin>>a){
        cnt++;
        if(a=='\\') cnt-=2;
        if(a==' ') cnt--;
    }
    cout<<cnt;
    fclose(stdin);
    fclose(stdout);
    return 0;
}