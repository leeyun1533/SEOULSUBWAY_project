//함수이름:extractHeap
//함수기능:힙의 뿌리, 최댓값을 반환
//입력:없음
//출력:없음
//리턴값:heap의 뿌리
//최종수정일:2017-02-23

#include "SeoulSubway.h"
#include "mydef.h"
int extractHeap(int *nheap, int heap[MAX],int check1[MAX])
{ 
	int v = heap[1]; 
	heap[1] = heap[(*nheap)--]; // 뿌리값 임시저장, 뿌리의 값을 힙의 마지막 원소로 바꾼뒤, 힙의 크기를 1 감소시킨다.
	downHeap(*nheap,heap,check1,1); // 뿌리로 왔던 값을 downheap 시킴
	return v; //뿌리의 값 반환
}
