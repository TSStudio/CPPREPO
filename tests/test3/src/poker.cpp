#include<iostream>
#include<cstdio>


using namespace std;

int main(void){
    freopen("poker.in","r",stdin);
    freopen("poker.out","w",stdout);
    char pai1c,pai2c;
    int pai1,pai2;
    cin>>pai1c>>pai1>>pai2c>>pai2;
    if(pai1==pai2){
        cout<<"legendary";
        return 0;
    }
    if(pai1c==pai2c){
        cout<<"especially";
        return 0;
    }
    cout<<"ordinary";
    return 0;
    fclose(stdin);
    fclose(stdout);
}