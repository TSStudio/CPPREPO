#include<iostream>
using namespace std;
int main(){
    int min,max,cur,sum=0;
    cin>>min>>max;
    for(cur=min;cur<=max;cur++){
        if(cur%17==0){
            sum+=cur;
        }
    }
    cout<<sum;
    system("pause");
}