//�Լ��̸�:downHeap
//�Լ����:��ġ�� �����ʴ� ���� ����
//�Է�:����
//���:����
//���ϰ�:nheap,heap[],check1[]
//����������:2017-02-23



#include "SeoulSubway.h"
#include "mydef.h"
void downHeap(int nheap, int heap[MAX],int check1[MAX], int heap_sequence)
{
	int i, v;
	v = heap[heap_sequence];
	while (heap_sequence <= nheap / 2)  // ���� ũ���̰�, nheap/2���� ũ�ԵǸ� �ڽ��� ������ �����Ƿ� �� �̻� ���������ʱ� �����̴�.
	{
		i = heap_sequence << 1; // i�� << ��Ʈ������ �� ����
		if (i < nheap  &&  check1[heap[i]] < check1[heap[i + 1]])   i++;//�ڽ��� ū�Ͱ� �� �ڽ��� ������ ������
		if (check1[v] >= check1[heap[i]])   break;
		heap[heap_sequence] = heap[i];// �ڽ��� ũ�� �ڸ��� �ٲٰ� �ٽ� ������ ����.
		heap_sequence = i;
	}
	heap[heap_sequence] = v;
}