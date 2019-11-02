#include<bits/stdc++.h>

using namespace std;

int main(void){
    int k=1,x=1,i=1,flag=0,j=1; 
    int n;
    int num=0;
    cin>>n;   
    while(1){  
        for(j=1;j<=k;j++){  
            num=num+k;   
            i++;  
            if(i>n)  {  
                x=0;  
                flag=1; 
                break;  
            }  
        }  
        if(flag)  
           break;  
        k++;
    }
    cout<<num;
    return 0;
}