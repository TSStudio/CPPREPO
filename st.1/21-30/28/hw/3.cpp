#include<iostream>
#include<queue>

using namespace std;

int main(void){
    queue<int> q;
    char opr;
    int n;
    while(cin>>opr){
        if(opr=='I'){
            cin>>n;
            q.push(n);
        }else{
            if(q.empty()){
                cout<<"None"<<endl;
            }else{
                cout<<q.front()<<endl;
                q.pop();
            }
        }
    }
    return 0;
}