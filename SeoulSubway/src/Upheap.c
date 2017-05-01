//함수이름:upHeap
//함수기능:자신이 부모보다 값이 작을때 까지 루프
//입력:없음
// 출력:없음
// 리턴값:정렬된 heap,checheap_sequence1
//최종수정일:2017-02-24


#include "SeoulSubway.h"
#include "mydef.h"

void upHeap(int heap[MAX], int check1[MAX], int heap_sequence)
{
	int v;

	v = heap[heap_sequence];

	while (check1[heap[heap_sequence / 2]] <= check1[v] && heap_sequence / 2>0) // check의 값에 의해서 정렬, 이진트리 구조이므로 k/2는 k의 부모를 뜻함 각조건을 비교하여 루프를 돌림
	{
		heap[heap_sequence] = heap[heap_sequence / 2];//자신이 크면 부모의 값을 자신의 위치로 내린다.
		heap_sequence/= 2; //k에다가 2를 나눈 값을 k에 저장

	}
	heap[heap_sequence] = v; //루프가 끝나면 그때 heap_sequence가 자신의 자리이므로 먼저 저장해준 v값을 대입한다.
}