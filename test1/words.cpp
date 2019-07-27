#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
//先独立出来密文转换的函数
char figpas(char a){
    if('A'<=a&&a<='Z'){
        if(a>='F'){
            return a-5;
        }else{
            return a+21;
        }
    }else{
        return a;
    }
}

int main(void){
    freopen("words.in","r",stdin);
    freopen("words.out","w",stdout);
    char input[300];
    scanf("%[^\n]",&input);
    for(int i=0;i<strlen(input);i++){
        printf("%c",figpas(input[i]));
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}