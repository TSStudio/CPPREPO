#include<iostream>
#include<cstdio>
#include<string>
#include<stack>

using namespace std;

int main(){
    freopen("pair.in","r",stdin);
    freopen("pair.out","w",stdout);
    string brackets;
    cin>>brackets;
    int bs=0;
    int lbs[100];
    int rbs[100];
    for(int i=0;i<brackets.size();i++){
        if(brackets[i]=='('){
            lbs[bs]=i;
            bs++;
        }
        if(brackets[i]==')'){
            bs--;
            cout<<lbs[bs]<<" "<<i<<endl;
        }
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}