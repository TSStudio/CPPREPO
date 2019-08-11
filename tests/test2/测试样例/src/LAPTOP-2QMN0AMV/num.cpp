#include <fstream>
using namespace std;
ifstream cin("num.in");
ofstream cout("num.out");
int num;
int main(){
	int n;
	int a,b;
	cin>>a>>b>>n;
	cout<<a<<" "<<b<<" "; 
	for(int i=3;i<=n;i++){
		num=a+b;
		a=b;
		b=num;
		cout<<num<<" ";
	}
	return 0;
}
