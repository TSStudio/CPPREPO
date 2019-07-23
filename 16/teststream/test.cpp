#include<fstream>
#include<cstdio>

using namespace std;

ifstream cin("sum.in");
ofstream cout("sum.out");
int main(void){
    ios::sync_with_stdio(false);
    int a,b;
    cin>>a>>b;
    cout<<a+b;
    cin.close();
    cout.close();
    return 0;
}