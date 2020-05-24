#include<iostream>

using namespace std;

int main(){
    for(int i=1;i<=9;i++){
        for(int x=1;x<=i;x++){
            cout<<x<<"*"<<i<<"="<<x*i<<" ";
        }
        cout<<endl;
    }
    return 0;
}