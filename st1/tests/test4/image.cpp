#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(void){
    freopen("image.in","r",stdin);
    freopen("image.out","w",stdout);
    int cx,cy;
    int totalsame=0;
    char im1[100][100];
    cin>>cx>>cy;
    for(int i=0;i<cx;i++){
        for(int j=0;j<cy;j++){
            cin>>im1[i][j];
        }
    }
    char tmp;
    for(int i=0;i<cx;i++){
        for(int j=0;j<cy;j++){
            cin>>tmp;
            if(tmp==im1[i][j]){
                totalsame++;
            }
        }
    }
    double out=totalsame/(double(cx)*cy)*100;
    printf("%.2lf",out);
    fclose(stdin);
    fclose(stdout);
    return 0;
}