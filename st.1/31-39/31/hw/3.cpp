#include<iostream>

using namespace std;

int main(void){
    double bucket[1000]={};
    double num;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>bucket[i];
    }
    //冒泡排序
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(bucket[j]<bucket[j+1]){
                swap(bucket[j],bucket[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<bucket[i]<<" ";
    }
    return 0;
}