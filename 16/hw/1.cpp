// 已知1英寸=25.4毫米，请你写一个方便的小工具，将输入的英寸数（大于0）换算成厘米数。
// 输入：要转换的英寸数（大于0）
// 输出：转换后的厘米数（保留两位小数）
// 要求：使用scanf与printf
#include<iostream>

using namespace std;

int main(void){
    double inch;
    scanf("%lf",&inch);
    double centimeter=inch*2.54;
    printf("%.2lf\n",centimeter);
    return 0;
}