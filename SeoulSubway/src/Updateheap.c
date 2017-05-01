//함수이름:updateHeap
//함수기능:check를 검사 후 heap을 갱신
//입력:없음
//출력:없음
//리턴값:0 or 1
//최종수정일: 2017-02-24



#include "SeoulSubway.h"
#include "mydef.h"


int updateHeap(int check1[MAX], int *nheap, int heap[MAX], int v, int new_weight)
{


	if (check1[v] == -2147483647LL) //algorithm함수에서 check는 int 음수 최저값으로 초기화됨, 
	{

		heap[++(*nheap)] = v; //힙에 추가
		check1[v] = new_weight;
		upHeap(heap, check1, *nheap);
		return 1;
	}

	else // 새로 들어온 값과 기존의 값을 비교해서 새로온 값이 가중치가 크면 새로운 가중치로 바꾼다.
	{
		if (check1[v] < new_weight)
		{
			check1[v] = new_weight;
			orderHeap(check1, heap, *nheap);// 힙의 내용 재배열
			return 1;
		}
	}
	return 0;
}