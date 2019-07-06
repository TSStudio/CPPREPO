#include<iostream>
using namespace std;
void outputspaces(int n){
    for(int i=0;i<n;i++){
        cout<<" ";
    }
}
void outputstars(int n){
    for(int i=0;i<n;i++){
        cout<<"*";
    }
}
int main(){
    int n;
    cin>>n;
    outputstars(n);
    cout<<endl;
    for(int i=0;i<n-2;i++){
        cout<<"*";
        outputspaces(n-2);
        cout<<"*"<<endl;
    }
    outputstars(n);
    system("pause");
    return 0;
}