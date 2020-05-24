#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main(void){
    //freopen("substr.in","r",stdin);
    //freopen("substr.out","w",stdout);
    char substr[200],str[200];
    scanf("%s%s",&substr,&str);
    bool isSubStr=false;
    for(int i=0;i<strlen(str);i++){
        if(str[i]!=substr[0]) continue;//把第一个就不是的过滤掉 然后开始匹配后面的
        for(int i2=0;i2<strlen(substr);i2++){
            if(str[i+i2]==substr[i2]&&i2==strlen(substr)-1){
                //最后一个字符也匹配到了
                isSubStr=true;
                break;
            }else if(str[i+i2]!=substr[i2]){
                break;
            }
            continue;
        }
    }
    for(int i=0;i<strlen(substr);i++){
        if(substr[i]!=str[0]) continue;//把第一个就不是的过滤掉 然后开始匹配后面的
        for(int i2=0;i2<strlen(str);i2++){
            if(substr[i+i2]==str[i2]&&i2==strlen(str)-1){
                //最后一个字符也匹配到了
                isSubStr=true;
                swap(str,substr);
                break;
            }else if(substr[i+i2]!=str[i2]){
                break;
            }
            continue;
        }
    }
    if(isSubStr){
        printf("%s is substring of %s",substr,str);
    }else{
        printf("No substring");
    }
    //fclose(stdin);
    //fclose(stdout);
}