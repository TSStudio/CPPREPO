#include<iostream>
using namespace std;
int main(){
    int p1,p2,o;
    char op;
    bool ot=true;
    cin>>p1>>p2>>op;
    switch(op){
        case '+':
        o=p1+p2;
        break;
        case '-':
        o=p1-p2;
        break;
        case '*':
        o=p1*p2;
        break;
        case '/':
        if(p2==0){
            ot=false;
            cout<<"Divided by zero!"<<endl;
        }else{
            o=p1/p2;
        }
        break;
        default:
        ot=false;
        cout<<"Invalid operator!"<<endl;
    }
    if(ot){
        cout<<o<<endl;
    }
    system("pause");
    return 0;
}