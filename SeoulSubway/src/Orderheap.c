//�Լ��̸�:orderHeap
//�Լ����:���� �������Ѵ�.
//�Է�:����
//���:����
//���ϰ�:����
//����������:2017-02-23

#include "SeoulSubway.h"
#include "mydef.h"


void orderHeap(int check[MAX],int heap[MAX],int nheap) //���� ������ �ϴ� �Լ�
{
	int k;
	for (k = nheap / 2; k >= 1; k--)
		downHeap(nheap,heap,check,k); 
}