#include<iostream>

using namespace std;

int main(){
    int n,s,sum1=0,sum2=0,sum3=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s==1){
            sum1++;
        }
        if(s==2){
            sum2++;
        }
        if(s==3){
            sum3++;
        }
    }
    cout<<"1 2 3"<<endl<<sum1<<" "<<sum2<<" "<<sum3;
    return 0;
}