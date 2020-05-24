#include<iostream>
#include<string>
#include <cstdio>
using namespace std;
struct student{
	string name;
	int score; 
}a[100]; 
int main(){
	freopen("act.in","r",stdin);
  	freopen("act.out","w",stdout);  
	int n;
	bool flag=true; 
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i].name>>a[i].score;
	for(int i=1;i<=n-1;i++){	
		for(int j=1;j<=n-i;j++){
			if(a[j].score>a[j+1].score){
				swap(a[j],a[j+1]);
				flag=false;
			}
		}
		if(flag)	break; 
	}
	for(int i=1;i<=n;i++){
		cout<<a[i].name<<endl;
	}
	fclose(stdin); 
	fclose(stdout);
	return 0;
}

