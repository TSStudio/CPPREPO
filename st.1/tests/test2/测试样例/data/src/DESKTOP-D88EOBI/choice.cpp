#include <iostream>

using namespace std;

int main(){
    freopen("choice.in","r",stdin);
    freopen("choice.out","w",stdout);
    int a[1000];
    int n,m,t; 
    cin >> n;
    int count = n;
    int s = 0;
    for(int i = 0;i <n;i++){    
        cin >> t;
        if(t == 1){
            a[i] = 2;
        }else{
            a[i] = 3;
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
    fclose(stdin);
    fclose(stdout);
    return 0;
}