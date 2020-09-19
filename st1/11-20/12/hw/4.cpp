#include<iostream>

using namespace std;
int main(){
    int arr[100][100];
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int z=0;z<n;z++){
            cin>>arr[i][z];
        }
    }
    for(int z=0;z<n;z++){
        for(int i=m-1;i>=0;i--){
            cout<<arr[i][z]<<" ";
        }
        cout<<endl;
    }
}