//�Լ��̸�:Short_trans
//�Լ����:�ּ�ȯ�� �˰���
//�Է�:����
//���:����
//���ϰ�:node ����ü�� ����Ű�� t,numberName.nheap,heap,check1,parent
//����������:2017-02-24

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
