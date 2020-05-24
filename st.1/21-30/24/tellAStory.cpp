#include<iostream>

using namespace std;

int i=0;
void tellAStory(){
    if(i<20){
        cout<<"从前有座山，山里有座庙，庙里有个老和尚，老和尚在给小和尚讲故事，讲的故事是：";
        i++;
        tellAStory();
    }
    return;
}


int main(void){
    tellAStory();
    return 0;
}