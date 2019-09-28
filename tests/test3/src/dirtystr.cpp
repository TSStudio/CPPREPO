#include<iostream>
#include<string>
#include<cstdio>

using namespace std;
int main(){
    freopen("dirtystr.in","r",stdin);
    freopen("dirtystr.out","w",stdout);
	string in_str;
	getline(cin, in_str);
	int i_com[26]{ 0 };
	size_t iMax = in_str.length();
	for (int i = 0; i < iMax; i++){
		i_com[in_str[i] - 'a'] += 1;
	}
	int iflag_min = 0;
	for (int j = 0; j < 26; j++){
		if (iflag_min == 0 && i_com[j] != 0){
			iflag_min = i_com[j];
		}
		else if (iflag_min != 0 && i_com[j] != 0 && iflag_min > i_com[j]){
			iflag_min = i_com[j];
		}
	}
	string out_str;
	for (int i = 0; i < iMax; i++){
		if (i_com[in_str[i] - 'a'] != iflag_min){
			out_str += in_str[i];
		}
	}
	cout << out_str.c_str() << endl;
	fclose(stdin);
    fclose(stdout);
	return 0;
}