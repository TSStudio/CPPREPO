// 数根是这样定义的：对于一个正整数n，将它的各个数位上的数字相加得到一个新数，如果这个数是一位数，我们就称之为n的数根，否则重复处理直到它成为一个一位数。
// 例如，n=34，3+4=7，7是一位数，所以7是34的数根。
// 再如，n=345，3+4+5=12，1+2=3，3是一位数，所以3是345的数根。
// 对于输入数字n，编程计算它的数根。
#include<iostream>
#include<cmath>

using namespace std;

int getlength(int num){
	float temp1=0;
	int flag=0;
	temp1=num;
	while(temp1>10)
	{
		temp1=temp1/10;
		flag++;
    }
    return flag+1;
}
int getsum(int x){
    int count=1;
    int nummin[10];
    int sum=0;
    for(;;){
        if(x<pow(10,count)){
            break;
        }
        nummin[count-1]=x%(int)pow(10,count-1)/pow();
        count++;
    }
    for(int i=0;i<count;i++){
        sum+=nummin[i];
    }
    return sum;
}
int getroot(int x){
    for(;;){
        if(x<10){
            break;
        }
        x=getsum(x);
    }
    return x;
}
int main(void){
    int num;
    cin>>num;
    cout<<getroot(num);
    return 0;
}