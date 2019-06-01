#include<iostream>

using namespace std;

int main(){
    int line=3;
    for(int i=1;i<=line;i++){
        for(int x=1;x<=line-i+2;x++){
            cout<<" ";
        }
        for(int y=1;y<=i*2-1;y++){
            cout<<"*";
        }
        cout<<endl;
    }
    line++;
    for(int i=1;i<=line;i++){
        for(int x=1;x<=line-i+1;x++){
            cout<<" ";
        }
        for(int y=1;y<=i*2-1;y++){
            cout<<"*";
        }
        cout<<endl;
    }
    line++;
    for(int i=1;i<=line;i++){
        for(int x=1;x<=line-i;x++){
            cout<<" ";
        }
        for(int y=1;y<=i*2-1;y++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<5;i++){
        cout<<"   ***"<<endl;
    }
    return 0;
}