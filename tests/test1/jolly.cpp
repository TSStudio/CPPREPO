#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

int main(void){
    freopen("jolly.in","r",stdin);
    freopen("jolly.out","w",stdout);
    int n=0;
    int nums[3000],abss[3000],chas[2999];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    for(int i=0;i<n-1;i++){
        chas[i]=nums[i]-nums[i+1];
        abss[i]=abs(chas[i]);
    }
    bool isJolly=true;
    sort(abss,abss+n-1);
    for(int i=1;i<n;i++){
        if(i!=abss[i-1]){
            isJolly=false;
            break;
        }
    }
    if(isJolly){
        printf("Jolly");
    }else{
        printf("Not jolly");
    }
    fclose(stdin);
    fclose(stdout);
}