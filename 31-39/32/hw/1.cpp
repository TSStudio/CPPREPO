#include<iostream>
using namespace std;
struct node{
    char value;
    int left,right;//左右孩子子树
}data[100]; 
char ch;
int cnt,root;
//建立一棵二叉树   abd###ce##f##
int buildTree(int bt){
    cin >> ch;
    if(ch == '#'){
        bt = 0;
    }
    else{
        bt = ++cnt;
        data[bt].value = ch;
        data[bt].left = data[bt].right = 0;
        data[bt].left = buildTree(bt);
        data[bt].right = buildTree(bt);
    }
    return bt;
} 
//计算结点数
int Node(int bt){
    if(bt){
        if(data[bt].left == 0 && data[bt].right == 0)  return 1;
        else return Node(data[bt].left)+Node(data[bt].right) + 1;
    }
    else return 0;
} 
int main(){
    root = 0;
    cnt = 0;
    root = buildTree(0);
    cout << Node(root) << endl;
    return 0;
}