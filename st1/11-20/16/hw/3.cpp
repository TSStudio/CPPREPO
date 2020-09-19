// 考试结束后，数学老师想统计一下班上及格的同学的个数。请你来写一个程序实现这个功能。
// 要求：使用scanf与printf
// 输入
// 第一行为一个大于0的整数n，代表班上的同学个数。
// 第二行有n个整数，代表每个同学的成绩。

// 输出
// 一个整数，代表及格的同学个数。
#include<iostream>

using namespace std;

int main(void){
    int totalstudents=0;
    scanf("%d",&totalstudents);
    int sum=0;
    int temp=0;
    for(int i=0;i<totalstudents;i++){
        scanf("%d",&temp);
        if(temp>=60){
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}