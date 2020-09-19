// 描述
// 春节时期，同学们都收到了很多的压岁钱（整数），现在小童想知道班上压岁钱最多的同学，请你来帮他编程实现。
// 输入
// 第一行为一个数字n(0<n<50)，表示班上有n名同学的信息。
// 接下来有n行，每行包括同学的姓名和压岁钱数，以空格隔开。
// 输出
// 一行或多行，表示压岁钱最多的人的姓名和钱数，以空格隔开。若有多名同学并列第一，则以多行展示并输出结果。
// 难度
// 难
// 输入示例
// 5
// zhangze 380
// zhuhaomiao 1250
// tiansen 2500
// zhaoyatao 6666
// yangxueqing 6666
// 输出示例
// zhaoyatao 6666
// yangxueqing 6666

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

struct stu{
    string name;
    int money;
};

bool cmp(stu a,stu b){
    return a.money>b.money;
}

stu students[100];
int main(void){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>students[i].name>>students[i].money;
    }
    sort(students,students+n,cmp);
    //这里还是得用以前的方法统计一下..
    int highest=students[0].money;
    int highsame=0;
    for(int i=0;i<n;i++){
        if(students[i].money==highest){
            highsame++;
        }else{
            break;
        }
    }
    for(int i=0;i<highsame;i++){
        cout<<students[i].name<<" "<<students[i].money<<endl;
    }
}