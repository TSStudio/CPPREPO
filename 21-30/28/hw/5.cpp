#include <iostream>
using namespace std;
int main(){
    int a[101];
    int n,m,t; 
    cin >> n;
    int count = n;
    int s = 0;
    for(int i = 0;i <n;i++){    
        cin >> t;
        if(t == 1){
            a[i] = 1;
        }else{
            a[i] = 2;
        }
    }
    cin >> m;
    int i = 0;
    while(count > 1){
        if(a[i] >0){
            s++;
        }
        if(s == m){
            a[i]--;
            if(a[i] == 0){
                count--;
            }
            s = 0;
        }
        i++;
        i%=n; 
    }
    for(i = 0;i <n;i++){
        if(a[i]){
            cout << i + 1<< endl;
        }
    }
    return 0;
}