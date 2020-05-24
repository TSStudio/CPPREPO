#include<iostream>
#include<queue>

using namespace std;

int main(void){
    queue<int> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        q.push(i+1);
    }
    for(;;){
        if(q.size()>=2){
            cout<<q.front()<<" ";
            q.pop();
            q.push(q.front());
            q.pop();
            continue;
        }
        cout<<q.front();
        break;
    }
    return 0;
}