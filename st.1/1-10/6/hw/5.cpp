#include <iostream>
using namespace std;
int main()  {
    int i,j,sum=0,sumd=0,n,ans;
    cin>>n;
    for(i=1;;i++){
        sum+=i;
        if (sum>=n) break;
    }
    i--;
    for(j=1;j<=i;j++){
        sumd+=j*j;
    }
    ans=(1+i)*(n-(sum-i-1))+sumd;
    cout<<ans;
    return 0;
}