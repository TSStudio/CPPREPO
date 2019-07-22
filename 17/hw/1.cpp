#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

struct money{
    char name[100];
    double basicm;
    double floatm;
    double outuse;
    double total;
};
int main(void){
    money m[3];
    for(int i=0;i<3;i++){
        cin>>m[i].name>>m[i].basicm>>m[i].floatm>>m[i].outuse;
        m[i].total=m[i].basicm+m[i].floatm-m[i].outuse;
    }
    for(int i=0;i<3;i++){
        cout<<m[i].name<<" "<<fixed<<setprecision(2)<<m[i].total<<endl;
    }
    return 0;
}