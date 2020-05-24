#include <iostream>
#include <cassert>

using namespace std;

int main(){
    int n;
    char c;
    cin >> n;
    assert(n>=1 && n<=1000);
    int r = n % 123;
    if (r >= 97 && r <= 122){
        c = (char)r;
    }
    else{
        r = n % 91;
        if (r >= 65 && r <= 90){
            c = (char)r;
        }
        else{
            c = '*';
        }
    }
    cout << c << endl;
    return 0;
}