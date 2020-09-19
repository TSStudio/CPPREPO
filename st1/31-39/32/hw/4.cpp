#include<iostream>  
#include<string>  
using namespace std;  
struct tree  
{  
    char x;  
    int left=0,right=0;  
}t[101];  
char temp;  
int cur=0,root;  
int func1(int bt){  
    cin>>temp;  
    if(temp!='.'){  
        bt=++cur;  
        t[bt].x=temp;  
        t[bt].left=func1(bt);  
        t[bt].right=func1(bt);  
    }  
    else{  
        bt=0;  
    }  
    return bt;  
}  
void func2(int bt){  
    if(bt){  
        func2(t[bt].left);  
        cout<<t[bt].x;  
        func2(t[bt].right);  
    }  
}  
void func3(int bt){  
    if(bt){  
        func3(t[bt].left);  
        func3(t[bt].right);  
        cout<<t[bt].x;  
    }  
}  
int main(){  
    root=func1(0);  
    func2(root);  
    cout<<endl;  
    func3(root);  
    return 0;  
}