#include<iostream>
#include<cstring>
#include<string>
using namespace std;
//因为层序是先输出根节点的，所以可以递归查找
string s1,s2;
void find(int l1,int r1,int l2,int r2){
    int i,j;
    for(i=l2;i<=r2;i++)//找层次遍历中优先输出根节点的位置 
    {
        int f=0;
        for(j=l1;j<=r1;j++)
        {
            if(s2[i]==s1[j])//输出根节点 
            {
                cout<<s1[j];
                f=1;
                break;
            }
        }
        if(f)
            break;
    }
    if(j>l1)
        find(l1,j-1,0,r2);//遍历左子树 
    if(j<r1)
        find(j+1,r1,0,r2);//遍历右子树 
}
int main(){
    cin>>s1>>s2;
    find(0,s1.length()-1,0,s2.length());
    return 0;
}