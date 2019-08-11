#include<iostream>
using namespace std;
//先定义一个栈
int stack[20];
int top=20,foot=19;//栈顶和栈底
void push(int num){
    stack[top-1]=num;
    top--;
}
int pop(){
    top++;
    return stack[top-1];
}
int main(void){
    int n,tmp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmp;
        push(tmp);
    }
    for(int i=0;i<n;i++){
        cout<<pop()<<" ";
    }
    return 0;
}