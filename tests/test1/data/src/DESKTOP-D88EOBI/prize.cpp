#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

bool isGanbu(char in){
    if(in=='Y'){
        return true;
    }else{
        return false;
    }
}
struct stu{
    int serial;
    char name[20];
    int endAvg,clsAvg;
    bool ganbu;
    int Prizetotal;
};
bool cmp(stu a,stu b){
    if(a.Prizetotal!=b.Prizetotal){
        return a.Prizetotal>b.Prizetotal;
    }else{
        return a.serial<b.serial;
    }
}
stu students[100];
int main(void){
    freopen("prize.in","r",stdin);
    freopen("prize.out","w",stdout);
    int studentnum=0;
    char ganbutemp;
    scanf("%d",&studentnum);
    for(int i=0;i<studentnum;i++){
        scanf("%s%d%d %c",&students[i].name,&students[i].endAvg,&students[i].clsAvg,&ganbutemp);
        students[i].ganbu=isGanbu(ganbutemp);
        students[i].serial=i;
    }
    //CALC PRIZE
    int total=0;
    for(int i=0;i<studentnum;i++){
        //wusi
        students[i].Prizetotal=0;
        if(students[i].endAvg>85&&students[i].clsAvg>80){
            students[i].Prizetotal+=8000;
            total+=8000;
        }
        if(students[i].endAvg>90){
            students[i].Prizetotal+=4000;
            total+=4000;
        }
        if((students[i].clsAvg>80)&&(students[i].ganbu==true)){
            students[i].Prizetotal+=2000;
            total+=2000;
        }
    }
    sort(students,students+studentnum,cmp);
    for(int i=0;i<strlen(students[0].name);i++){
        printf("%c",students[0].name[i]);
    }
    printf("\n%d\n%d",students[0].Prizetotal,total);
    fclose(stdin);
    fclose(stdout);
    return 0;
}