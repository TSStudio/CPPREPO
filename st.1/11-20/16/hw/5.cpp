// 描述
// 学校要举行拔河比赛，现有n（大于0）个班参加比赛，每个班5名同学参赛，朱老师想根据每名同学的力量值来预测哪个班能得冠军。预测原则为每个班的5名同学力量值（大于0的整数）总和越大，排名就越考前。
// 要求：使用scanf与printf
// 输入
// 输入：第一行为班级数量n，接下来的n行，每行有5个整数，代表某个班5名同学的力量值。
// 输出
// 排名第一的班级班号及力量值总和。（力量值相同的按编号靠前的算，某个班的编号为输入时的顺序号，例如第三次输入的班号为3）
// 难度
// 难
// 输入示例
// 3
// 2 2 3 4 2
// 3 3 4 2 3
// 3 3 2 3 4
// 输出示例
// 2 15
#include<iostream>

using namespace std;

int main(void){
    int classes=0;
    scanf("%d",&classes);
    int classforcetotal[1000];
    int forcetemp=0;
    for(int i=1;i<=classes;i++){
        classforcetotal[i]=0;
        for(int i2=0;i2<5;i2++){
            //这里是每个同学的力量
            scanf("%d",&forcetemp);
            classforcetotal[i]+=forcetemp;
        }
    }
    //开始求最大值
    int highestFORCE=0,highestCLASS=0;
    for(int i=1;i<=classes;i++){
        if(classforcetotal[i]>highestFORCE){
            highestFORCE=classforcetotal[i];
            highestCLASS=i;
        }
    }
    printf("%d %d",highestCLASS,highestFORCE);
    return 0;
}