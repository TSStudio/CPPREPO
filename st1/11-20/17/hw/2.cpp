#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int numbers[1000],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    sort(numbers,numbers+n);
    for(int i=n-1;i>=0;i--){
        cout<<numbers[i]<<' ';
    }
    return 0;
}