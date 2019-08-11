#include<iostream>
#include<iomanip>
#include<cmath>
  
using namespace std;

int main(){  
    int b;  
    double a;  
    cin>>a>>b;  
    if(b==1){  
        cout<<fixed<<setprecision(3)<<pow(a,3);  
    }else if(b==2){  
        cout<<fixed<<setprecision(3)<<sqrt(a);  
    }else if(b==3){  
        cout<<fixed<<setprecision(3)<<-sqrt(a);  
    }else{  
        cout<<-a;  
    }  
return 0;  
}