#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main(){
    int scores[100];
    string names[100];
    int count,highest=0;
    string highestn;
    cin>>count;
    for(int i=0;i<count;i++){
        cin>>scores[i]>>names[i];
        if(scores[i]>highest){
            highest=scores[i];
            highestn=names[i];
        }
    }
    cout<<highestn;
    return 0;
}