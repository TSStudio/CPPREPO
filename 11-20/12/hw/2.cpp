#include<iostream>

using namespace std;
int main(){
    int arr[5][5];
    for(int x=0;x<5;x++){
        for(int y=0;y<5;y++){
            cin>>arr[x][y];
        }
    }
    int m,n;
    cin>>m>>n;
    m--;
    n--;
    swap(arr[m],arr[n]);
    for(int x=0;x<5;x++){
        for(int y=0;y<5;y++){
            cout<<arr[x][y]<<" ";
        }
        cout<<endl;
    }
}