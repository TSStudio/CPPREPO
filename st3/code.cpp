#include<iostream>
#include<cmath>

using namespace std;

/*
Example:
getdigit(123,3)
-->1
*/
int getdigit(int num,int digit){
    return num/int(pow(10,digit-1))%10;
}
int main(){
    int number=0;
    for(number=100;number<1000;number++){
        //246 一个号码正确 位置正确
        if((getdigit(number,3)==getdigit(246,3))+(getdigit(number,2)==getdigit(246,2))+(getdigit(number,1)==getdigit(246,1))!=1) continue;
        if((getdigit(number,1)==2||getdigit(number,2)==2)+(getdigit(number,1)==4||getdigit(number,3)==4)+(getdigit(number,2)==6||getdigit(number,3)==6)!=0) continue;
        //258 1个号码正确，位置不正确
        if((getdigit(number,3)==getdigit(258,3))+(getdigit(number,2)==getdigit(258,2))+(getdigit(number,1)==getdigit(258,1))!=0) continue;
        if((getdigit(number,1)==2||getdigit(number,2)==2)+(getdigit(number,1)==5||getdigit(number,3)==5)+(getdigit(number,2)==8||getdigit(number,3)==8)!=1) continue;
        //692 2个号码正确，位置不正确
        if((getdigit(number,3)==getdigit(692,3))+(getdigit(number,2)==getdigit(692,2))+(getdigit(number,1)==getdigit(692,1))!=0) continue;
        if((getdigit(number,1)==6||getdigit(number,2)==6)+(getdigit(number,1)==9||getdigit(number,3)==9)+(getdigit(number,2)==2||getdigit(number,3)==2)!=2) continue;
        cout<<number<<endl;
    }
    return 0;
}