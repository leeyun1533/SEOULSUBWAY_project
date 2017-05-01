//�Լ��̸�:updateHeap
//�Լ����:check�� �˻� �� heap�� ����
//�Է�:����
//���:����
//���ϰ�:0 or 1
//����������: 2017-02-24



#include "SeoulSubway.h"
#include "mydef.h"


int updateHeap(int check1[MAX], int *nheap, int heap[MAX], int v, int new_weight)
{


	if (check1[v] == -2147483647LL) //algorithm�Լ����� check�� int ���� ���������� �ʱ�ȭ��, 
	{

		heap[++(*nheap)] = v; //���� �߰�
		check1[v] = new_weight;
		upHeap(heap, check1, *nheap);
		return 1;
	}

	else // ���� ���� ���� ������ ���� ���ؼ� ���ο� ���� ����ġ�� ũ�� ���ο� ����ġ�� �ٲ۴�.
	{
		if (check1[v] < new_weight)
		{
			check1[v] = new_weight;
			orderHeap(check1, heap, *nheap);// ���� ���� ��迭
			return 1;
		}
	}
	return 0;
}