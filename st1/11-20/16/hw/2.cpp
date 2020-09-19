// 小童刚学会了正负数，他觉得负数就是再正数前面加负号（“-”）。为了更好的看出效果，他决定写个程序，不管输入的是正数还是负数，都输出负数。
// 要求：使用scanf与printf
#include<iostream>
#include<cmath>

using namespace std;

int main(void){
    double input;
    scanf("%lf",&input);
    double output=-abs(input);
    printf("%.2lf\n",output);
    return 0;
}