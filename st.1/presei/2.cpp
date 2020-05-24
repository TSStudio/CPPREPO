#include<iostream>

using namespace std;

int main(void){
    int m;
    int n[200001];
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>n[i];
    }
    int max=0;
    for(int i=0;i<m;i++){
        for(int j=m-1;j>=0;j--){
            if(i==j) break;
            int temp=n[i]&n[j];
            if(temp>max)
            max=temp;
        }
    }
    cout<<max;
    return 0;
}