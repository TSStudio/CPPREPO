#include <iostream>
#include <cstdio>
using namespace std;
bool is_prime(int n){
	if(n==2)return 1;
	for(int i=2;i*i<=n;i++){
		if(n%i==0)return 0;
	}
	return 1;
} 
int main(){
  	freopen("shoot.in","r",stdin);
  	freopen("shoot.out","w",stdout);  
	int n,sum=0;
	cin>>n;
	for(int i=2;i<=n;i++){
		if(is_prime(i))sum++;
	}
	cout<<sum;
	fclose(stdin); 
	fclose(stdout); 
	return 0;
}
