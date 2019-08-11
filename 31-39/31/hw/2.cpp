#include<iostream>

using namespace std;


bool isOdd(int a){
    if(a%2!=0) return true;
    return false;
}
int main(void){
    bool bucket[1000]={};
    int num,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        if(isOdd(num)){
            bucket[num]=1;
        }
    }
    for(int i=1000;i>=0;i--){
        if(bucket[i]){
            cout<<i<<" ";
        }
    }
    return 0;
}