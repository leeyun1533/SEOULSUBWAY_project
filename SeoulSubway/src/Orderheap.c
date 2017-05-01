//함수이름:orderHeap
//함수기능:힙을 재정렬한다.
//입력:없음
//출력:없음
//리턴값:없음
//최종수정일:2017-02-23

#include "SeoulSubway.h"
#include "mydef.h"


void orderHeap(int check[MAX],int heap[MAX],int nheap) //힙을 재정렬 하는 함수
{
	int k;
	for (k = nheap / 2; k >= 1; k--)
		downHeap(nheap,heap,check,k); 
}