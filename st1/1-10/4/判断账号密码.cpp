#include <iostream>
using namespace std;
int main() {
	int user = 123, pw = 456, u, p;
	cin >> u >> p;
	if(u == user) {
		if(p == pw) {
			cout << "��¼�ɹ�";
		} else {
			cout << "�������";
		}
	} else {
		cout << "�˺Ŵ���";
	}

	return 0;
}

