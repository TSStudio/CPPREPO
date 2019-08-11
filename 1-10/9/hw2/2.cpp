#include<iostream>

using namespace std;

int main(){
    int stdTotal,stdNow=0,stdPerLine,stdThisLine=0;
    cin>>stdTotal>>stdPerLine;
    for(;;){
        if(stdNow>=stdTotal) break;
        if(stdThisLine>=stdPerLine){
            stdThisLine=0;
            cout<<endl;
            continue;
        }
        cout<<"* ";
        stdNow++;
        stdThisLine++;
    }
    return 0;
}