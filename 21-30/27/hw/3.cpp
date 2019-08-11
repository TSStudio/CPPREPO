#include <iostream>
using namespace std;
int stack[1010],a[1010];
int top=0,n=0;
int main() {
    for (int i = 1; i <= 5; ++ i) {
        cin >> a[i];
    }
    top = 0;
    for (int i = 1,cur = 1; i <= 5; i++) {
        while (cur <= a[i]) {
            stack[++top] = cur;
            cur = cur+2; 
        }
        if (stack[top] == a[i]) {
            --top;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}