#include<iostream>  
#include<iomanip>  
#include<cstring>  
#include<string>  
#include<cmath>  
using namespace std;  
int main(){  
    string  a[101],tp;  
    int n=0,max=0,m;  
    getline(cin,tp);  
    for(int i=0;i<tp.length();i++){  
        if(tp[i]==' '||tp[i]==','||tp[i]=='.'){  
            n++;  
            continue;     
        }
        a[n]+=tp[i];  
    }  
    for(int i=0;i<n;i++){  
        if(a[i].length()>max){  
            max=a[i].length();  
            m=i;  
        }  
    }  
    cout<<a[m];   
    return 0;  
}