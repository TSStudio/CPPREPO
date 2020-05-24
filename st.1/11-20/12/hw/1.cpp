#include<iostream>

using namespace std;
int main(){
    bool arr[10000];
    int Ms[100][2];
    int sum=0;
    for(int i=0;i<=9999;i++){
        arr[i]=false;
    }
    int L,M;
    cin>>L>>M;
    for(int i=0;i<=L;i++){
        arr[i]=true;
    }
    for(int i=1;i<=M;i++){
        cin>>Ms[i][0]>>Ms[i][1];
    }
    for(int i=0;i<=M;i++){
        for(int x=Ms[i][0];x<=Ms[i][1];x++){
            arr[x]=false;
        }
    }
    for(int i=0;i<=9999;i++){
        if(arr[i]==true){
            sum++;
        }
    }
    cout<<sum+1;
}