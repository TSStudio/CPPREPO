#include<iostream>
#include<cmath>

using namespace std;
double getlength(double x1,double y1,double x2,double y2){
    return sqrt(pow(abs(x1-x2),2)+pow(abs(y1-y2),2));
}
int main(void){
    double lengthnow,thisx,last;
    lengthnow=0;
    last=0;
    double Ax=-1,Ay=-1,Bx=2,By=7;
    for(thisx=-100;thisx<-1;thisx++){
        lengthnow=getlength(thisx,0,Bx,By)-getlength(thisx,0,Ax,Ay);
        if(lengthnow<last){
            thisx--;
            break;
        }
        last=lengthnow;
    }
    for(;thisx<thisx+1;thisx+=0.1){
        lengthnow=getlength(thisx,0,Bx,By)-getlength(thisx,0,Ax,Ay);
        if(lengthnow<last){
            thisx-=0.1;
            break;
        }
        last=lengthnow;
    }
    for(;thisx<thisx+0.1;thisx+=0.01){
        lengthnow=getlength(thisx,0,Bx,By)-getlength(thisx,0,Ax,Ay);
        if(lengthnow<last){
            thisx-=0.01;
            break;
        }
        last=lengthnow;
    }
    for(;thisx<thisx+0.01;thisx+=0.001){
        lengthnow=getlength(thisx,0,Bx,By)-getlength(thisx,0,Ax,Ay);
        if(lengthnow<last){
            thisx-=0.001;
            break;
        }
        last=lengthnow;
    }
    cout<<last<<" "<<thisx;
    return 0;
}