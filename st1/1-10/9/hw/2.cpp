#include<iostream>

using namespace std;

int main(){
    int line;
    cin>>line;
    for(int i=1;i<=line;i++){
        for(int z=1;z<=line-i;z++){
            cout<<" ";
        }
        for(int x=1;x<=i;x++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}