#include <iostream>
#include <climits>
#include <cstdio>
using namespace std;
int main(){
	freopen("dirtystr.in","r",stdin);
	freopen("dirtystr.out","w",stdout);
    string str;
   	cin>>str; 
    int a[27]={},minx=INT_MAX;
    int l=str.length();
    for(int i=0;i<l;i++){
        a[str[i]-'a'+1]++;
    }
    for(int i=1;i<=26;i++){
    	if(a[i]!=0&&a[i]<minx)
    		minx=a[i];
	} 
    for(int i=0;i<l;i++){
    	if(a[str[i]-'a'+1]==minx)continue;
        cout<<str[i];
    }
    fclose(stdin); 
	fclose(stdout); 
    return 0;

}
