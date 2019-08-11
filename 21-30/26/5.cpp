#include<iostream>
using namespace std;
//先定义一个栈
char stack[100];
int top=100,foot=99;//栈顶和栈底
void push(char num){
    stack[top-1]=num;
    top--;
}
char pop(){
    top++;
    return stack[top-1];
}
void cleanstack(){
    for(int i=0;i<100;i++){
        stack[i]=32;
    }
    top=100;
    foot=99;
}
int main(void){
    int n;
    char tmp;
    cin>>n;
    int realcount=0;
    for(int i=0;i<n;i++){
        cin>>tmp;
        if(tmp=='C'){
            cleanstack();
            realcount=0;
            continue;
        }
        realcount++;
        push(tmp);
    }
    for(int i=0;i<realcount;i++){
        cout<<pop()<<" ";
    }
    if(realcount==0){
        cout<<"C";
    }
    return 0;
}