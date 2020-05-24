#include<iostream>

using namespace std;

int round=0;
int numbers[1000]={};
int maxi=0;
void output(int x){
    if(round>=6){
        round=1;
        cout<<endl;
    }else{
        round++;
    }
    cout<<x<<" ";
}
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
            output(i);
            mark(i);
        }
    }
}
int main(){
    init();
    mainthread();
    return 0;
}