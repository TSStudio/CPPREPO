#include<iostream>
#include<cstdio>

using namespace std;

int main(void){
    freopen("triangle.in","r",stdin);
    freopen("triangle.out","w",stdout);
    int n;
    cin>>n;
    n++;
    int i,j,a[31][31];
    for(i=1;i<n;i++){
        a[i][i]=1;
        a[i][1]=1;
    }
    for(i=3;i<n;i++){
        for(j=2;j<=i-1;j++){
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for (i=1;i<n;i++){
        for (j=1;j<=i;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    fclose(stdin);
    fclose(stdout);
    return 0;
}