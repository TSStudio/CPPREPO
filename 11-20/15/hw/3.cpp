// 早操时间，老师让同学们按照身高从小到大排成单列纵队，小童由于迟到了，同学们已经站好了队伍，小童想要插队。已知同学们排好的顺序及身高，请你告诉小童应该插在几号（若有身高相同的则尽量靠前排）。
// 输入：两行，第一行输入同学人数n（0<n<100）与小童的身高h，第二行依次输入n名同学的身高（cm）。
// 输出：一行，表示小童应该插入的序号。
// 要求：使用自定义函数。
#include<iostream>

using namespace std;

bool shouldStandBehind(int a,int b){
    if(a>b){
        return true;
    }
    return false;
}
int main(void){
    int n,h;
    cin>>n>>h;
    int thish;
    bool flag;
    for(int i=0;i<n;i++){
        cin>>thish;
        if(!shouldStandBehind(h,thish)){
            cout<<i+1;
            flag=true;
            break;
        }
    }
    if(!flag){
        cout<<n+1;
    }
    return 0;
}