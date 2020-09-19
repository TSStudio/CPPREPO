#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(void){
    double a,b,c,x1,x2;
    scanf("%lf%lf%lf",&a,&b,&c);
    double delta=b*b-(4*a*c);
    if(delta<0){
        printf("No answer!");
    }else if(delta==0){
        printf("x1=x2=%.5lf",-b/(2*a));
    }else{
        printf("x1=%.5lf;x2=%.5lf",min((-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a)),max((-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a)));
    }
    return 0;
}