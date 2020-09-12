#include<iostream>
#include<algorithm>

using namespace std;

//This File is ASSEMBLED to Finish Problem:
//https://dsa.cs.tsinghua.edu.cn/oj/problem.shtml?id=1142
//Copyright 2020 Tong Mingyang from MSANNU

int points[500005];
int n,m;
//Findleft
//Example
//1 5 6 7 9 15
//[4...... Then,Left Number(1)must be tinier than 4
// Right number must equal to or greater than 4
int BinarySearch(int nx,int key){
    int low=0,high=nx-1;
    int mid=0;
    while(low<=high){
        mid=(low+high)/2;
        if(points[mid]<key&&points[mid+1]>=key)
            return mid;
        if(points[mid]<key)
            low=mid;
        else
            high=mid;
    }
    return -1;
}
int BinarySearch2(int nx,int ny,int key){
    int low=ny,high=nx-1;
    int mid=0;
    while(low<=high){
        mid=(low+high)/2+1;
        if(points[mid-1]<=key&&points[mid]>key)
            return mid;
        if(points[mid]>key)
            high=mid;
        else
            low=mid;
    }
    return -1;
}

int main(void){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>points[i];
    }
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        int temp=BinarySearch(n,a);
        cout<<"Left:"<<temp;
        cout<<" Right:"<<BinarySearch2(n,temp,b);
    }
    return 0;
}