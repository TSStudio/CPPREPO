#include<iostream>
#include<cstdio>
using namespace std;
int date1,date2,md1,md2,year1,year2,ans=0;

bool right(int year, int month, int date)   //判断生成的日期是否是真实存在的
{
    if ((month>12)||(month<1))    return 0;
    if ((date<1)||(date>31))  return 0;
    if (month==2)
    {
        if (date>29)  return 0;
        if (date==29)
           if (!((year%4==0)&&(year%100!=0)||(year%400==0)))
                 return 0;
    }
    else
        if ((month==4)||(month==6)||(month==9)||(month==11))
           if (date==31)  return 0;
    return 1;
}

int main()
{
    //freopen("testdata.in","r",stdin);
    //freopen("p2010.out","w",stdout);
    
    cin>>date1;
    cin>>date2;
    year1=date1/10000; md1=date1%10000; 
    year2=date2/10000; md2=date2%10000;
        //date：年+月+日（8位数字），md：月+日（4位数字）
    ans=0;
    for (int i=year1; i<=year2; i++)
    {
                //枚举年，并生成回文日期
        int a1=i%10;
        int a2=(i%100)/10;
        int m=a1*10+a2;   //m：月
        int a3=(i%1000)/100;
        int a4=i/1000;
        int d=a3*10+a4;    //d：日
        int md=m*100+d;
        if (right(i,m,d))     //判断生成的日期是否是真实存在的
        {
            int date=i*10000+md;
            if (date1<=date&&date<=date2)  ans++;
         }
    }
    cout<<ans;
    return 0;
}