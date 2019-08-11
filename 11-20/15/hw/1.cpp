/*
描述

英国和美国的重量单位为“英镑”，已知1千克=2.2046226磅，请你写一个自定义函数，将输入的千克数（大于0）换算成英镑。
输入：要转换的千克数（大于0）
输出：转换后的英镑数（保留4位小数）
要求：使用函数调用
输入
要转换的千克数（大于0）

输出
转换后的英镑数（保留4位小数）
 */
#include<iostream>
#include<iomanip>
using namespace std;
double pound(double kg){
    return kg*2.2046226;
}
int main(void){
    double kg,lb;
    cin>>kg;
    cout<<fixed<<setprecision(4)<<pound(kg);
    return 0;
}