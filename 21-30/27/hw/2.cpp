#include<iostream>
#include <climits>
using namespace std;
int n,c,flag,m;
int stack[10005],top;
int num[10005];
int main() {
    int i,j;
    cin >> n>> c;
    for(i=1; i<=n; i++)
        cin >> num[i];
    //6 3
    //5 2 3 8 7 4 
    while(m<n) {  // 变量m表示输出的数的个数
        if(flag<n) {   //flag表示栈内数字的个数 
            int minn=INT_MAX,q;
            //根据栈的空余位置，找出数组的前几项（例如开始栈为空，空余3个位置那么我们就看数字前三位的最小值） 
            for(i=flag+1; i<=flag+c-top && i<=n; i++) {
                if(num[i]<minn) {
                    minn=num[i];
                    q=i;
                }
            }
            //如果栈为空，我们直接把q项数据入栈 
            if(!top) {
                for(i=flag+1; i<q; i++) {
                    stack[++top]=num[i];
                }
                flag = q;
                cout << num[flag]<<" ";  //输出栈顶的最小值 
                m++;
            } else {  //如果栈不为空 
                //如果要入栈的数字比栈顶元素大，输出栈顶元素
                if(stack[top]<num[q]) {
                    cout << stack[top--]<<" ";
                    m++;
                } else {   //如果要入栈数字比栈顶元素小，把该数字入栈 
                    for(i=flag+1; i<q; i++) {
                        stack[++top]=num[i];
                    }
                    flag = q;
                    cout << num[flag]<<" ";
                    m++;
                }
            }
        } else {  //如果满了，那么把栈里面的数据全部输出 
            while(top) {
                cout << stack[top--]<<" ";
                m++;
            }
        }
    }
    return 0;
}