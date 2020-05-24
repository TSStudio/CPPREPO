#include<iostream>

using namespace std;

int main(void){
    bool bucket[100]={};
    int num,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        bucket[num]=1;
    }
    for(int i=0;i<101;i++){
        if(bucket[i]){
            cout<<i<<" ";
        }
    }
    return 0;
}