#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main(){
	srand((unsigned)time(NULL));
	cout<<"��ѡ���Ѷ�(10����):"<<endl;
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
		cout<<"��²��ֵ:";
		cin>>guess;
		if(guess==realNum){
			cout<<"��ȷ!"<<endl;
			break;
		}else if(guess>realNum){
			cout<<"̫����!"<<endl;
		}else if(guess<realNum){
			cout<<"̫С��!"<<endl;
		}
		guessTimes++;
		if(guessTimes>10){
			cout<<"������,������"<<realNum<<endl;
			break;
		}
	}
	system("pause");
	return 0;
}
