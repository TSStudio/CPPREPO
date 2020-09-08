#include<bits/stdc++.h>

using namespace std;

int gs[7][201];
int main(){
    int nl,k,i,j;
    while(cin>>nl>>k){
        for(j=0;j<=nl;j++)
            gs[1][j]=1;
        for(i=2;i<=k;i++)
            for(j=0;j<=nl-k;j++)
                if(j>=i)
                    gs[i][j]=gs[i-1][j]+gs[i][j-i];
                else
                    gs[i][j]=gs[i-1][j];
        cout<<gs[k][nl-k]<<endl;
    }
    return 0;
}   