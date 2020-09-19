#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    long long cur=3,last=1,last2=0,now;
    cout<<"0 1 ";
    for(cur=3;cur<=60;cur++){
        now=last+last2;
        cout<<now<<" ";
        last2=last;
        last=now;
        if(cur%10==0){
            cout<<endl;
        }
    }
    system("pause");
}