#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

struct sh{
    string name;
    int num;
    int tick;
};

bool cmp(sh a,sh b){
    if(a.tick==b.tick){
        return a.num<b.num;
    }else{
        return a.tick>b.tick;
    }
}

int main(void){
    sh sheep[4];
    //DEFINES
    sheep[1].num=1;//I know it's f**king stupid,but this low level language forces me to do that
    sheep[2].num=2;
    sheep[3].num=3;
    sheep[1].name="Ï²ÑòÑò";
    sheep[2].name="ÀÁÑòÑò";
    sheep[3].name="ÃÀÑòÑò";
    sheep[1].tick=0;
    sheep[2].tick=0;
    sheep[3].tick=0;
    //
    int n;
    int TEMP_CHOOSE;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>TEMP_CHOOSE;
        sheep[TEMP_CHOOSE].tick++;
    }
    sort(sheep+1,sheep+4,cmp);
    for(int i=1;i<=3;i++){
        cout<<sheep[i].num<<" "<<sheep[i].name<<" "<<sheep[i].tick<<endl;
    }
    return 0;
}