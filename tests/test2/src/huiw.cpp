#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main(void){
    freopen("huiw.in","r",stdin);
    freopen("huiw.out","w",stdout);
    char num[1000000];
    cin>>num;
    for(int i=0;i<strlen(num)/2;i++){
        if(num[i]==num[strlen(num)-1-i]) continue;
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
    fclose(stdin);
    fclose(stdout);
    return 0;
}