// 数根是这样定义的：对于一个正整数n，将它的各个数位上的数字相加得到一个新数，如果这个数是一位数，我们就称之为n的数根，否则重复处理直到它成为一个一位数。
// 例如，n=34，3+4=7，7是一位数，所以7是34的数根。
// 再如，n=345，3+4+5=12，1+2=3，3是一位数，所以3是345的数根。
// 对于输入数字n，编程计算它的数根。
#include<iostream>
#include<cmath>

using namespace std;

int add_num(int n);
int add_num(int n){
    if (n < 10)return n;
    else return add_num(n / 10) + n % 10;
}
int getroot(int x){
    for(;;){
        if(x<10){
            break;
        }
        x=add_num(x);
    }
    return x;
}
int main(void){
    int num;
    cin>>num;
    cout<<getroot(num);
    return 0;
}