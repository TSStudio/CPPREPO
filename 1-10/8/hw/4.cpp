#include<iostream>

using namespace std;

int main(){
    int n,thi,target,sum=0;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>thi;
        arr[i]=thi;
    }
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            sum++;
        }
    }
    cout<<sum;
    return 0;
}