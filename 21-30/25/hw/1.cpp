#include<iostream>
#include<cmath>

using namespace std;

int Folded(int count){
    if(count==1) return 1;
    return Folded(count-1)+pow(2,count-1);
}
int main(void){
    int x;
    cin>>x;
    cout<<Folded(x);
    return 0;
}