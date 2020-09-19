#include<iostream>

using namespace std;


int pow_n(int x, int n){
    int pw = 1;
    while (n > 0)     {
        if (n & 1)    // n & 1 等价于 (n % 2) == 1
            pw *= x;
        x *= x;
        n >>= 1;// n >>= 1 等价于 n /= 2
    }
    return pw;
}
int main(void){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<pow_n(a,b)%c;
    return 0;
}