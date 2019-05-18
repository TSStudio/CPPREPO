#include<iostream>
#include<iomanip>
#include<cmath>
  
using namespace std;

int main(){
    int day;
    cin>>day;
    switch(day%7){
        case 0:
        cout<<"星期六";
        break;
        case 1:
        cout<<"星期日";
        break;
        case 2:
        cout<<"星期一";
        break;
        case 3:
        cout<<"星期二";
        break;
        case 4:
        cout<<"星期三";
        break;
        case 5:
        cout<<"星期四";
        break;
        case 6:
        cout<<"星期五";
        break;
    }
    system("pause");
    return 0;
}