#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Node
{
	int data;//�������
	struct Node *pNext;//ָ����һ���ṹ�����
}NODE,*pNODE;
int main()
{
	int n, i, m, t;
	scanf("%d", &n);//n������
	scanf("%d", &m);//��һ������
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
			p = head;//p��������
			while (p != NULL)
			{
				if (p->pNext == NULL)//Ҫ�ȼ��!
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
				p = p->pNext;//��Ҫд��p++!
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
