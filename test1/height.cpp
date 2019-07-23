#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(void){
    freopen("height.in","r",stdin);
    freopen("height.out","w",stdout);
    int heights[100]={};
    int mei=0,num=0,start=0,end=0;
    int temp=0;
    scanf("%d%d",&num,&mei);
    for(int i=0;i<num;i++){
        scanf("%d",&temp);
        heights[i]=temp;
    }
    bool flag=false;
    sort(heights,heights+num);

    for(int i=0;i<num;i++){
        if((heights[i]==mei)&&(!flag)){
            start=i+1;
            flag=true;
        }else if(heights[i]!=mei&&flag){
            end=i;
            break;
        }
    }
    printf("%d %d",start,end);
    fclose(stdin);
    fclose(stdout);
}