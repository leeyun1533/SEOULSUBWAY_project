//함수이름:Short_line
//함수기능:최단시간경로 알고리즘
//입력:없음
//출력:없음
//리턴값:parent.check,nheap,heap,station,i
//최종수정일:2017-02-23

#include "SeoulSubway.h"
#include "mydef.h"

#include "stddef.h"

int Short_line(node *t, int heap[MAX], int* nheap, int check1[MAX], int parent[MAX], node* station[], int i)
{	// 최소시간경로 함수


	for (t = station[i]; t != NULL; t = t->next) 
	{

		if (check1[t->number] < 0) 
		{
			if (updateHeap(check1, nheap, heap, t->number, -(t->weight + check1[i]))) 
			{
				parent[t->number] = i;   
				
			}
		}

	}
}