#include<iostream>
using namespace std;
int n,a[10];
long count=0;
void perm(int k){
    int j,p,t;
    if(________①){
        count++;
        for(p=1;p<=n;p++) cout<<a[p];
        cout<<" ";
        if(________②) cout<<endl;
        return;
    }
    for(j=k;j<=n;j++){
        t=a[k];
        a[k]=a[j];
        a[j]=t;
        ________③;
        t=a[k];
        ________④;
        a[j]=t;
    }
}
int main(){
    int i;
    cin>>n;
    for(i=1;i<=n;i++) a[i]=i;
    ________⑤;
    return 0;
} 