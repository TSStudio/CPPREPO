#include<iostream>
#include<cstring>

using namespace std;
int raw1,raw2,year,mo,d;
bool ishuiwen(int n=0){
	int s,x=0;
	s=n;
	while(s>0){
		x=x*10+s%10;
		s=s/10;
	}
	if(x==n)return true;
	else return false;
    return false;
}
bool isRunnian(int y){
    if(((y%4==0)&&(y%100!=0))||((y%100==0)&&(y%400==0))) return true;
    else return false;
}
int getdays(int mo,int yr=1111){
    if(mo==1||mo==3||mo==5||mo==7||mo==8||mo==10||mo==12){
        return 31;
    }
    if(mo==2){
        if(isRunnian(yr)) return 29;
        else return 28;
    }
    return 30;
}
void daypass(){
    d++;
    if(d>getdays(mo,year)){
        mo++;
        d=1;
    }
    if(mo>12){
        year++;
        mo=1;
    }
}
int main(){
    int rawtemp,cnt=0;
    cin>>raw1>>raw2;
    year=raw1/10000;
    mo=raw1%10000/100;
    d=raw1%100;

    for(;;){
        rawtemp=year*10000+(mo*100)+d;
        if(ishuiwen(rawtemp)) cnt++;
        daypass();
        //判断是否超过结束日期
        if(rawtemp>raw2) break;
    }
    cout<<cnt;
    system("pause");
    return 0;
}