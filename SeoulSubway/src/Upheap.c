//�Լ��̸�:upHeap
//�Լ����:�ڽ��� �θ𺸴� ���� ������ ���� ����
//�Է�:����
// ���:����
// ���ϰ�:���ĵ� heap,checheap_sequence1
//����������:2017-02-24


#include "SeoulSubway.h"
#include "mydef.h"

void upHeap(int heap[MAX], int check1[MAX], int heap_sequence)
{
	int v;

	v = heap[heap_sequence];

	while (check1[heap[heap_sequence / 2]] <= check1[v] && heap_sequence / 2>0) // check�� ���� ���ؼ� ����, ����Ʈ�� �����̹Ƿ� k/2�� k�� �θ� ���� �������� ���Ͽ� ������ ����
	{
		heap[heap_sequence] = heap[heap_sequence / 2];//�ڽ��� ũ�� �θ��� ���� �ڽ��� ��ġ�� ������.
		heap_sequence/= 2; //k���ٰ� 2�� ���� ���� k�� ����

	}
	heap[heap_sequence] = v; //������ ������ �׶� heap_sequence�� �ڽ��� �ڸ��̹Ƿ� ���� �������� v���� �����Ѵ�.
}