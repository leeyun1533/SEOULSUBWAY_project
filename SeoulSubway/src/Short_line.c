//�Լ��̸�:Short_line
//�Լ����:�ִܽð���� �˰���
//�Է�:����
//���:����
//���ϰ�:parent.check,nheap,heap,station,i
//����������:2017-02-23

#include "SeoulSubway.h"
#include "mydef.h"

#include "stddef.h"

int Short_line(node *t, int heap[MAX], int* nheap, int check1[MAX], int parent[MAX], node* station[], int i)
{	// �ּҽð���� �Լ�


	for (t = station[i]; t != NULL; t = t->next) 
	{

		if (check1[t->number] < 0) 
		{
			if (updateHeap(check1, nheap, heap, t->number, -(t->weight + check1[i]))) 
			{
				parent[t->number] = i;   
				
			}
		}

	}
}