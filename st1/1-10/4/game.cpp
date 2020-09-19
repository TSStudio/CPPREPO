#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main(){
	srand((unsigned)time(NULL));
	cout<<"请选择难度(10以上):"<<endl;
	int dif;
	cin>>dif;
	if(dif<10){
		return 0;
	}
	int realNum;
	realNum=1 + (int)dif * rand() / (RAND_MAX + 1);
	bool notReach=true;
	int guess,guessTimes=0;
	while(notReach){
		cout<<"你猜测的值:";
		cin>>guess;
		if(guess==realNum){
			cout<<"正确!"<<endl;
			break;
		}else if(guess>realNum){
			cout<<"太大啦!"<<endl;
		}else if(guess<realNum){
			cout<<"太小啦!"<<endl;
		}
		guessTimes++;
		if(guessTimes>10){
			cout<<"你输了,数字是"<<realNum<<endl;
			break;
		}
	}
	system("pause");
	return 0;
}
