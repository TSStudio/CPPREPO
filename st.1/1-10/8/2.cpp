#include<iostream>
using namespace std;
int main(){
    int a[2][3]={1,2,3,4,5,6};
    for(int i=1;i>=0;i--){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
    }
    return 0;
}