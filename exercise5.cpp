#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Node
{
	int data;//存放数据
	struct Node *pNext;//指向下一个结构体对象
}NODE,*pNODE;
int main()
{
	int n, i, m, t;
	scanf("%d", &n);//n个数字
	scanf("%d", &m);//第一个数字
	pNODE p;
	pNODE head = (pNODE)malloc(sizeof(NODE));
	head->data = m;
	head->pNext = NULL;
	for (i = 0; i < n - 1; i++)
	{
		scanf("%d", &m);
		pNODE q = (pNODE)malloc(sizeof(NODE));
		q->data = m;
		q->pNext = NULL;
		if (m < head->data)
		{
			q->pNext = head;//head->pNext=head;
			head = q;
		}
		else
		{
			p = head;//p用来搜索
			while (p != NULL)
			{
				if (p->pNext == NULL)//要先检测!
				{
					p->pNext = q;
					break;
				}
				else if(m<p->pNext->data)
				{
					q->pNext = p->pNext;
					p->pNext = q;
					break;
				}
				p = p->pNext;//不要写成p++!
			}
		}
	}
	scanf("%d", &t);
	p = head;
	for (i = 0; i < t-1; i++)
	{
		p = p->pNext;
	}
	printf("%d\n", p->data);
	return 0;
}
