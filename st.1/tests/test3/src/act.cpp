#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>


using namespace std;

struct p{
    string name;
    int ord;
};
bool cmp(p a,p b){
    if(a.ord<b.ord) return true;
    return false;
}
int main(void){
    freopen("act.in","r",stdin);
    freopen("act.out","w",stdout);
    p peo[100];
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>peo[i].name>>peo[i].ord;
    }
    sort(peo,peo+num,cmp);
    for(int i=0;i<num;i++){
        cout<<peo[i].name<<endl;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}