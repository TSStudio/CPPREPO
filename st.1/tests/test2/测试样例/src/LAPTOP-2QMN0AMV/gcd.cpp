#include <fstream>
using namespace std;
ifstream cin("gcd.in");
ofstream cout("gcd.out");
int gcd(int x,int y){
	if(x%y==0)
		return y;
	return gcd(y,x%y);
}
int main(){
	int a,b;
	cin >> a >> b;
	cout << a*b/gcd(a,b) << endl;
	return 0;
}

