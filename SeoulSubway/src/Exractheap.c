//�Լ��̸�:extractHeap
//�Լ����:���� �Ѹ�, �ִ��� ��ȯ
//�Է�:����
//���:����
//���ϰ�:heap�� �Ѹ�
//����������:2017-02-23

#include "SeoulSubway.h"
#include "mydef.h"
int extractHeap(int *nheap, int heap[MAX],int check1[MAX])
{ 
	int v = heap[1]; 
	heap[1] = heap[(*nheap)--]; // �Ѹ��� �ӽ�����, �Ѹ��� ���� ���� ������ ���ҷ� �ٲ۵�, ���� ũ�⸦ 1 ���ҽ�Ų��.
	downHeap(*nheap,heap,check1,1); // �Ѹ��� �Դ� ���� downheap ��Ŵ
	return v; //�Ѹ��� �� ��ȯ
}
