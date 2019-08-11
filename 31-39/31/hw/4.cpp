#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(char (*p)[60],int n);
int delete_str(char (*p)[60],int n);
int main(){
    int i = 0,count1 = 0,count2 = 0;
    char word1[120][60],word2[121][60],temp[60];
    while(scanf("%s",temp) != EOF){
        if(temp[0] >= 65&&temp[0] <=90){
            strcpy(word1[count1++],temp);
        }
        else if(temp[0] >= 97&&temp[0] <=122){
            strcpy(word2[count2++],temp);
        }
        if(getchar() == '\n'){
            break;
        }
    }
    sort(word1,count1);
    sort(word2,count2);
    count1 = delete_str(word1,count1);
    count2 = delete_str(word2,count2);
    for(i = 0;i < count1;i++){
        printf("%s\n",word1[i]);
    }
    for(i = 0;i < count2;i++){
        printf("%s\n",word2[i]);
    }
    return 0;
}
void sort(char (*p)[60],int n)
{
    int i,j;
    char temp[60];
    for(i = 0;i < n - 1;i++){
        for(j = 0;j < n - i - 1;j++){
            if(strcmp(p[j],p[j + 1]) > 0){
                strcpy(temp,p[j]);
                strcpy(p[j],p[j + 1]);
                strcpy(p[j + 1],temp);
            }
        }
    }
}
int delete_str(char (*p)[60],int n){
    int i,j;
    for(i = 0;i < n - 1;i++){
        if(strcmp(p[i],p[i + 1]) == 0){
           for(j = i;j < n - 1;j++){
               strcpy(p[j],p[j + 1]);
           }
           i--;
           n--;
        }
    }
    return n;
}