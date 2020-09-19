#include<set>//通过Set去重
#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<string>se1;//容器
    set<string>se2;
    string temp;
    int n;
    cin>>n;
    while(n--){
        cin>>temp;
        se1.push_back(temp);
    }
    se2.insert(se1.begin(),se1.end());
    //如果有重复的会无法插入set
    cout<<se2.size()<<endl;//返回set中元素个数
    return 0;
}