#include<iostream>
#include<algorithm>

using namespace std;

struct money{
    string name;
    double basicm;
    double floatm;
    double outuse;
    double total;
};
money m[3];
int main(void){
    for(int i=0;i<3;i++){
        cin>>m[i].name>>m[i].basicm>>m[i].floatm>>m[i].outuse;
        m[i].total=m[i].basicm+m[i].floatm-m[i].outuse;
    }

    return 0;
}