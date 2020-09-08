#include<iostream>
#include<cmath>

using namespace std;

int main(void){
    while(1){
        cout<<"(退出请输入0)F/";
        double fnumber=1;
        cin>>fnumber;
        if(fnumber==0){
            return 0;
        }
        //fnumber=1/fnumber;
        cout<<"曝光时间:1/";
        double ss;
        cin>>ss;
        ss=1/ss;
        cout<<"iso";
        int iso=100;
        cin>>iso;
        //先处理iso100时的EV
        double ev=log(pow(fnumber,2)/ss)/log(2);
        if(iso!=100){
            ev=ev+log(iso/100)/log(2);
        }
        printf("%.1lf",ev);
    }
    return 0;
}