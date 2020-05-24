#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <stdlib.h>

using namespace std;
// 成员结点
typedef struct __Node
{
	int id;
	struct __Node* next; 
}Node;
int Play(int n, int m){
	// 链表长度:n
	// 构造循环链表
	Node* lst = (Node*)malloc(sizeof(Node)*n);
	int i;
	for(i=0; i<n; i++)
	{
		lst[i].id = i+1;
		if(i+1 == n)
			lst[i].next = &lst[0];
		else
			lst[i].next = &lst[i+1];
	}
	// 开始玩
	Node* cur = &lst[0]; // 当前
	Node* prev = &lst[n-1]; // 上一个
	int count = 0;
	while(prev != cur) //  只剩一个
	{
		count ++;
		if(count == m) // 数到m个
		{
			count = 0;
 
			// 移除当前结点
			prev->next = cur->next;
			cur = cur->next;
		}
		else
		{
			// 下一位
			prev = cur;
			cur = cur->next;
		}
	}
	// 剩下的是胜者
	int winner = cur->id;
	free(lst); // 释放内存
	return winner;
}
int main(void){
    int m,n;
    cin>>m>>n;
	int winner = Play(m,n);
	printf("%d",winner);
	return 0;
}