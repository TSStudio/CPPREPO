#include<iostream>

using namespace std;

int main(){
    int arr[100],thi,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>thi;
        arr[i]=thi;
    }
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}