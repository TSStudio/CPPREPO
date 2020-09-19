#include<iostream>

using namespace std;

int getXsquaredY(int x,int y){
    if(y==1) return x;
    return getXsquaredY(x,y-1)*x;
}
int main(void){
    int x,y;
    cin>>x>>y;
    cout<<getXsquaredY(x,y);
    return 0;
}