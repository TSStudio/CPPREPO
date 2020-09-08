#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int n,sum,L,h,x,r;

struct circc{
	double x;
	double y;
}a[20005];

bool cmp(circc a,circc b){
	return a.x<b.x;
} 

int main(){
	int T;
	cin>>T;
	while(T--){
		cin>>n>>L>>h;
	    sum=0;
        for(int i=1;i<=n;i++){
            cin>>x>>r;
            if(r<=h/2) continue;
            sum++;
            a[sum].x=x-sqrt(r*r-h*h/4.0);
            a[sum].y=x+sqrt(r*r-h*h/4.0);
        }
		sort(a+1,a+1+sum,cmp);
		double t=0;
        int ans=0,flag1=1,i=1;
        while(t<L){
            ans++;
            double s=t;
            for(;a[i].x<=s&&i<=sum;i++) if(t<a[i].y) t=a[i].y;
            if(t==s&&s<L){
                cout<<-1<< endl;
                flag1=0;
                break;
            } 
        }
        if(flag1) cout<<ans<<endl;
	}
	return 0;
}