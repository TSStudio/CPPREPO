#include<iostream>

using namespace std;

int main(){
    int line=5;
    for(int i=1;i<=line;i++){
        for(int x=1;x<i;x++){
            cout<<" ";
        }
        for(int y=1;y<=(line-i)*2+1;y++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=2;i<=line;i++){
        for(int x=1;x<=line-i;x++){
            cout<<" ";
        }
        for(int y=1;y<=i*2-1;y++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}