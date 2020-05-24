#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
    int n;
    while(~scanf("%d",&n)){
        int sum=0,i=2;
        while(true){
            if(i<=n)
                i=i*2;
            else
                i=((i-n)*2)-1;
            sum++;
            if(i==2)
                break;
        }
        printf("%d\n",sum);
    }
    return 0;
}