#include<queue>
#include <iostream>
#include <cstdio>
using namespace std;
struct data {
	int life;
	int number;
} peo[21];
queue<data> q;
int main() {
	freopen("choice.in", "r", stdin);
	freopen("choice.out", "w", stdout);
	int m,n,x,k=1;
	cin>>m;
	for(int i=1; i<=m; i++) {
		cin>>x;
		if(x==1)  peo[i].life=2;
		else   peo[i].life=3;
		peo[i].number=i;
		q.push(peo[i]);
	}
	cin>>n;
	while(q.size()>1) {
		if(k%n==0) {
			if(q.front().life>1) {
				q.front().life--;
				q.push(q.front());
				q.pop();
			} else  q.pop();
		} else {
			q.push(q.front());
			q.pop();
		}
		k++;
	}
	cout<<q.front().number<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
