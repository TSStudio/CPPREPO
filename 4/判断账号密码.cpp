#include <iostream>
using namespace std;
int main() {
	int user = 123, pw = 456, u, p;
	cin >> u >> p;
	if(u == user) {
		if(p == pw) {
			cout << "µÇÂ¼³É¹¦";
		} else {
			cout << "ÃÜÂë´íÎó";
		}
	} else {
		cout << "ÕËºÅ´íÎó";
	}

	return 0;
}

