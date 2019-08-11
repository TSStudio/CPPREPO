#include<iostream>
using namespace std;
int main(){
	int w,o;
	char j;
	cin>>w>>j;
	if(w<=1000){
		if(j=='y'){
			o=13;
		}else{
			o=8;
		}
	}else{
		int over=(w-1000)/500;
		int over2=(w-1000)%500;
		if(over2!=0){
			over++;
		}
		if(j=='y'){
			o=13+(over*4);
		}else{
			o=8+(over*4);
		}
	}
	cout<<o<<endl;
	return 0;
}
