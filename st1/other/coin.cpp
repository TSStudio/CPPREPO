#include<iostream>
#include<cstdio>

using namespace std;

int main(void){
    int coin=0,deltaexp=0,exp=0,deltacoin=0;
    cout<<"请输入你现在有的硬币数量：";
    cin>>coin;
    cout<<"请输入你现在的经验值：";
    cin>>exp;
    for(int i=1;;i++){
        coin+=1;
        if(coin<5){
            deltaexp+=coin*10;
            deltacoin+=coin;
            exp+=deltaexp;
            cout<<"当你每天投5个硬币，则一共投了";
            if(coin==0){
                cout<<deltacoin<<"个硬币("<<--i<<"天)，共获得"<<deltaexp<<"经验"<<endl<<"结果为";
            }else{
                cout<<deltacoin<<"个硬币("<<i<<"天,最后一天为"<<coin<<"个)，共获得"<<deltaexp<<"经验"<<endl<<"结果为";
            }
            if(deltaexp<28800){
                cout<<exp<<"/"<<"28800 很遗憾没有达到六级";
            }else{
                cout<<exp<<"/"<<"- 恭喜你达到了6级";
                break;
            }
            exp+=i*10;
            if(exp>=28800){
                cout<<endl<<"但是别慌，假如你每天都登录且看视频，则结果为"<<exp<<"/-，达到了6级"<<endl;
            }else{
                cout<<endl<<"而且即使你每天都登录且看视频，则结果也不过是"<<exp<<"/28800，没到6级";
                float dayneed1=0,dayneed2=0;
                dayneed1=(28800-exp)/10;
                dayneed2=(28800-exp)/20;
                cout<<endl<<"如果仅计算投硬币，那么大概还需要"<<dayneed1<<"天";
                cout<<endl<<"如果同时计入看视频和登录，那么大概还需要"<<dayneed2<<"天"<<endl;
            }
            break;
        }
        coin-=5;
        deltacoin+=5;
        deltaexp+=50;
    }
    getchar();
    return 0;
}