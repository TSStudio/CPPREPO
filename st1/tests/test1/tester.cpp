#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

int main(void){
    int score=0;
    for(int i=1;i<=10;i++){
        char bef[100]="copy .\\data\\data\\height\\data";
        char SSS[3];
        if(i==10){
            SSS[0]='1';
            SSS[1]='0';
            SSS[2]='\0';
        }else{
            SSS[0]='0'+i;
            SSS[1]='\0';
        }
        strcat(bef,SSS);
        strcat(bef,".in .\\height.in");
        system(bef);
        
        system("height.exe");
        char file1[60]=".\\height.out";
        char file2[60] = ".\\data\\data\\height\\data";
        strcat(file2,SSS);
        strcat(file2,".out");
        char command[1000] = {0};
        sprintf( command, "FC /B \"%s\" \"%s\" |find \"FC: 找不到差异\" >temp.txt" , file1 , file2);
        system(command);
        
        memset(command,0,1000);
        FILE *file = fopen("temp.txt","r");
        fread(command,1,1000,file);
        fclose(file);
        if (command[0]=='\0'){
            cout<<"height 测试数据"<<i<<"未通过"<<endl;
        }else{
            score+=10;
        }
        system("del temp.txt");
    }
    for(int i=1;i<=10;i++){
        char bef[100]="copy .\\data\\data\\long\\long";
        char SSS[3];
        if(i==10){
            SSS[0]='1';
            SSS[1]='0';
            SSS[2]='\0';
        }else{
            SSS[0]='0'+i;
            SSS[1]='\0';
        }
        strcat(bef,SSS);
        strcat(bef,".in .\\long.in");
        system(bef);
        
        system("long.exe");
        char file1[60]=".\\long.out";
        char file2[60] = ".\\data\\data\\long\\long";
        strcat(file2,SSS);
        strcat(file2,".out");
        char command[1000] = {0};
        sprintf( command, "FC /B \"%s\" \"%s\" |find \"FC: 找不到差异\" >temp.txt" , file1 , file2);
        system(command);
        
        memset(command,0,1000);
        FILE *file = fopen("temp.txt","r");
        fread(command,1,1000,file);
        fclose(file);
        if (command[0]=='\0'){
            cout<<"long 测试数据"<<i<<"未通过"<<endl;
        }else{
            score+=10;
        }
        system("del temp.txt");
    }
    for(int i=1;i<=10;i++){
        char bef[100]="copy .\\data\\data\\jolly\\jolly";
        char SSS[3];
        if(i==10){
            SSS[0]='1';
            SSS[1]='0';
            SSS[2]='\0';
        }else{
            SSS[0]='0';
            SSS[1]='0'+i;
            SSS[2]='\0';
        }
        strcat(bef,SSS);
        strcat(bef,".in .\\jolly.in");
        system(bef);
        
        system("jolly.exe");
        char file1[60]=".\\jolly.out";
        char file2[60] = ".\\data\\data\\jolly\\jolly";
        strcat(file2,SSS);
        strcat(file2,".out");
        char command[1000] = {0};
        sprintf( command, "FC /B \"%s\" \"%s\" |find \"FC: 找不到差异\" >temp.txt" , file1 , file2);
        system(command);
        
        memset(command,0,1000);
        FILE *file = fopen("temp.txt","r");
        fread(command,1,1000,file);
        fclose(file);
        if (command[0]=='\0'){
            cout<<"jolly 测试数据"<<i<<"未通过"<<endl;
        }else{
            score+=10;
        }
        system("del temp.txt");
    }
    for(int i=1;i<=10;i++){
        char bef[100]="copy .\\data\\data\\words\\words";
        char SSS[3];
        if(i==10){
            SSS[0]='1';
            SSS[1]='0';
            SSS[2]='\0';
        }else{
            SSS[0]='0';
            SSS[1]='0'+i;
            SSS[2]='\0';
        }
        strcat(bef,SSS);
        strcat(bef,".in .\\words.in");
        system(bef);
        
        system("words.exe");
        char file1[60]=".\\words.out";
        char file2[60] = ".\\data\\data\\words\\words";
        strcat(file2,SSS);
        strcat(file2,".out");
        char command[1000] = {0};
        sprintf( command, "FC /B \"%s\" \"%s\" |find \"FC: 找不到差异\" >temp.txt" , file1 , file2);
        system(command);
        
        memset(command,0,1000);
        FILE *file = fopen("temp.txt","r");
        fread(command,1,1000,file);
        fclose(file);
        if (command[0]=='\0'){
            cout<<"words 测试数据"<<i<<"未通过"<<endl;
        }else{
            score+=10;
        }
        system("del temp.txt");
    }
    for(int i=1;i<=10;i++){
        char bef[100]="copy .\\data\\data\\substr\\substr";
        char SSS[3];
        if(i==10){
            SSS[0]='1';
            SSS[1]='0';
            SSS[2]='\0';
        }else{
            SSS[0]='0';
            SSS[1]='0'+i;
            SSS[2]='\0';
        }
        strcat(bef,SSS);
        strcat(bef,".in .\\substr.in");
        system(bef);
        
        system("substr.exe");
        char file1[60]=".\\substr.out";
        char file2[60] = ".\\data\\data\\substr\\substr";
        strcat(file2,SSS);
        strcat(file2,".out");
        char command[1000] = {0};
        sprintf( command, "FC /B \"%s\" \"%s\" |find \"FC: 找不到差异\" >temp.txt" , file1 , file2);
        system(command);
        
        memset(command,0,1000);
        FILE *file = fopen("temp.txt","r");
        fread(command,1,1000,file);
        fclose(file);
        if (command[0]=='\0'){
            cout<<"substr 测试数据"<<i<<"未通过"<<endl;
        }else{
            score+=10;
        }
        system("del temp.txt");
    }
    for(int i=1;i<=10;i++){
        char bef[100]="copy .\\data\\data\\prize\\prize";
        char SSS[3];
        if(i==10){
            SSS[0]='1';
            SSS[1]='0';
            SSS[2]='\0';
        }else{
            SSS[0]='0';
            SSS[1]='0'+i;
            SSS[2]='\0';
        }
        strcat(bef,SSS);
        strcat(bef,".in .\\prize.in");
        system(bef);
        
        system("prize.exe");
        char file1[60]=".\\prize.out";
        char file2[60] = ".\\data\\data\\prize\\prize";
        strcat(file2,SSS);
        strcat(file2,".out");
        char command[1000] = {0};
        sprintf( command, "FC /B \"%s\" \"%s\" |find \"FC: 找不到差异\" >temp.txt" , file1 , file2);
        system(command);
        
        memset(command,0,1000);
        FILE *file = fopen("temp.txt","r");
        fread(command,1,1000,file);
        fclose(file);
        if (command[0]=='\0'){
            cout<<"prize 测试数据"<<i<<"未通过"<<endl;
        }else{
            score+=10;
        }
        system("del temp.txt");
    }
    cout<<"分数："<<score<<"分"<<endl;
    system("pause");
}