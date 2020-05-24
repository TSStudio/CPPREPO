#include<iostream>
#include<cstdio>

using namespace std;

int main(void){
    freopen("gcd.in","r",stdin);
    freopen("gcd.out","w",stdout);
    int a,b;
	cin>>a>>b;
    int min, max;
    int r;
    max=a>b?a:b;
    min=a<b?a:b;
    while(max%min!=0){
        r=max%min;
        max=min;
        min=r;
    }
    cout<<a*b/min<<endl;
    fclose(stdin);
    fclose(stdout);
    return 0;
}