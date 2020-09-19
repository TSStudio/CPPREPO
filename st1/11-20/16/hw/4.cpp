// 在墙角堆放着一堆完全相同的木块，如下图所示：
// (see image1.png)
// 因为木块堆放的很有规律，只要知道层数就能算出总数。
// 要求：使用scanf与printf
#include<iostream>
#include<cmath>

using namespace std;

int main(void){
    int layers=0;
    scanf("%d",&layers);
    int blocks=0;
    //get block of this layer
    for(int i=1;i<=layers;i++){
        blocks+=(pow(i,2)/2.0)+(i/2.0);
    }
    printf("%d",blocks);
    return 0;
}