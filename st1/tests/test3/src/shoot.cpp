#include<iostream>
#include<cstdio>


using namespace std;

int round=0;
int numbers[1000001]={};
int maxi=0;
int total=0;
int mark(int x){
    for(int i=0;;i++){
        if(x*i>maxi) break;
        numbers[x*i]=1;
    }
}
void init(){
    cin>>maxi;
}
void mainthread(){
    for(int i=2;i<=maxi;i++){
        if(numbers[i]==0){
            total++;
            mark(i);
        }
    }
}
int main(){
    freopen("shoot.in","r",stdin);
    freopen("shoot.out","w",stdout);
    init();
    mainthread();
    cout<<total;
    fclose(stdin);
    fclose(stdout);
    return 0;
}