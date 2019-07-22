#include<iostream>
#include<algorithm>

using namespace std;

struct stu{
    char name[100];
    int num;
};
bool cmp(stu a,stu b){
    return a.num<b.num;
}
stu students[100];
int main(void){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>students[i].name>>students[i].num;
    }
    sort(students,students+n,cmp);
    for(int i=0;i<n;i++){
        cout<<students[i].name<<endl;
    }
    return 0;
}