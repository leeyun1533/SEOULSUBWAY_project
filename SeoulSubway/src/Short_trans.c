//함수이름:Short_trans
//함수기능:최소환승 알고리즘
//입력:없음
//출력:없음
//리턴값:node 구조체를 가르키는 t,numberName.nheap,heap,check1,parent
//최종수정일:2017-02-24

#include "SeoulSubway.h"
#include "mydef.h"
#include "stddef.h"

void Short_trans(node *t, char **numberName,int *nheap,int heap[MAX],int check1[MAX],int parent[MAX], node* station[], int i){

	
	int checksum;

	for (t = station[i]; t != NULL; t = t->next)  
	{
		if (check1[t->number] < 0)  
		{
			if (strcmp(numberName[t->number],numberName[i])==0) 
				checksum = -(t->weight + check1[i]+1000);
			
			else
				checksum = -(t->weight + check1[i]); 
			
				
			if (updateHeap(check1,nheap,heap,t->number, checksum)) 
				parent[t->number] = i;   
		}
	}
}
