#include<iostream>
#include<stack>

using namespace std;

stack<int> s;
int main(){  
    int n;
    cin>>n;
    int top;
    int a[1000]={};
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1,r=1;i<=n;i++){
        while(r<=a[i]){
            s.push(r);
            r++;
        } if(s.top()==a[i]){
            s.pop();
            top--;
        }else{
            cout<<"NO";
            return 0;
        }
    }
    if(s.empty()==1){
        cout<<"YES";
    }
    return 0;
}