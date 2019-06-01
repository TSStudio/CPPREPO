#include<iostream>
using namespace std;
int main(){
    int min,max,cur;
    cin>>min>>max;
    bool flag=false;
    for(cur=min;cur<=max;cur++){
        if(cur%3==0&&cur%5==0&&cur%7==0){
            flag=true;
            cout<<cur<<" ";
        }
    }
    if(!flag){
        cout<<"0";
    }
    system("pause");
}