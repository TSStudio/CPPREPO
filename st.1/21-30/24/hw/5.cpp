#include<iostream>    
using namespace std;         
int tryThisSolution(int a,int b){if(b==1) return 1;if(b>a) return 0;else return tryThisSolution(a-1,b-1)+b*tryThisSolution(a-1,b);}
int main(){int m,n;cin>>m>>n;cout<<tryThisSolution(m,n)<<endl;return 0;    
}