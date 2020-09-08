#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;
int n;
int numbers[100001];
bool find(int x){
    int left = 0;
	int right = n;
	while (left<=right){
		int mid = (left + right) / 2;
		if (numbers[mid] < x){
			left = mid+1;    
		}
		else if (numbers[mid]>x){	
			right = mid-1;
		}
		else if (numbers[mid] == x){
			return true
			break;
		}
	}
	if (left > right){
		return false;
	}
}
int main(void){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    sort(numbers,numbers+n+1);
    int m;
    cin>>m;
    for(int i=0;i<n;i++){
        if(find(m-numbers[i])){
            cout<<numbers[i]<<" "<<m-numbers[i]<<endl;
        }
    }
    return 0;
}