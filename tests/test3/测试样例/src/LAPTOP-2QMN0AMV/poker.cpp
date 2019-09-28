#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  	freopen("poker.in","r",stdin);
  	freopen("poker.out","w",stdout);  
	char a,b;
	int c,d;
	cin>>a>>c;
	cin>>b>>d;
	if(c==d)cout<<"legendary"; 
	else if(a==b)cout<<"especially";
	else cout<<"ordinary";
	fclose(stdin); 
	fclose(stdout); 
	return 0;
}
