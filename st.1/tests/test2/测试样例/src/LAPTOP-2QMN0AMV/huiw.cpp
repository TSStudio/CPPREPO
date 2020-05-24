#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("huiw.in");
ofstream cout("huiw.out");
int main(){
	string n,n1;
	cin>>n;
	int len=0;
	for(int i=n.length()-1;i>=0;i--){	
		n1+=n[i];
	}
	if(n==n1){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl; 
	}
	return 0;
}


