#include<iostream>

using namespace std;

int i=0;
void tellAStory(){
    if(i<20){
        cout<<"��ǰ����ɽ��ɽ�������������и��Ϻ��У��Ϻ����ڸ�С���н����£����Ĺ����ǣ�";
        i++;
        tellAStory();
    }
    return;
}


int main(void){
    tellAStory();
    return 0;
}