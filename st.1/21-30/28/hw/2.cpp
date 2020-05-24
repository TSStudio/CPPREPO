#include<iostream>
#include<queue>

using namespace std;

int main(void){
    queue<int> boy;
    queue<int> girl;
    int m,n,p;
    cin>>m>>n>>p;
    for(int i=0;i<m;i++){
        boy.push(i+1);
    }
    for(int i=0;i<n;i++){
        girl.push(i+1);
    }
    for(int i=0;i<p;i++){
        cout<<boy.front()<<" "<<girl.front()<<endl;
        boy.push(boy.front());
        boy.pop();
        girl.push(girl.front());
        girl.pop();
    }
    return 0;
}