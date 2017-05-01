//함수이름:downHeap
//함수기능:위치에 맞지않는 힙을 내림
//입력:없음
//출력:없음
//리턴값:nheap,heap[],check1[]
//최종수정일:2017-02-23



#include "SeoulSubway.h"
#include "mydef.h"
void downHeap(int nheap, int heap[MAX],int check1[MAX], int heap_sequence)
{
	int i, v;
	v = heap[heap_sequence];
	while (heap_sequence <= nheap / 2)  // 힙의 크기이고, nheap/2보다 크게되면 자식을 가지지 않으므로 더 이상 내려가지않기 때문이다.
	{
		i = heap_sequence << 1; // i에 << 비트연산자 값 넣음
		if (i < nheap  &&  check1[heap[i]] < check1[heap[i + 1]])   i++;//자식중 큰것과 비교 자신이 작으면 내려감
		if (check1[v] >= check1[heap[i]])   break;
		heap[heap_sequence] = heap[i];// 자식이 크면 자리를 바꾸고 다시 루프를 돈다.
		heap_sequence = i;
	}
	heap[heap_sequence] = v;
}