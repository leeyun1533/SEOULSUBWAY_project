//�Լ��̸�:Register_weigh_time
//�Լ����:�ҿ�ð����
//�Է�:������ �ҿ�ð�
//���:�ҿ�ð� ��ϼ���,���� �޽���
//���ϰ�:Register_weigh_count
//����������:2017-03-13
//


#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "SeoulSubway.h"
#include "mydef.h"


int Register_weigh_time(Linked_node *plist,Linked_node *head, Linked_node *tail, Linked_node *new) {

	int weigh_count = 0;
	int weight[MAX];
	char roofBreak[10];
	char roofCheck[] = { "exit" };
	char option[10];
	plist = tail->next;
	printf("\n");
	printf(" �������������\n");
	printf(" ��    �ҿ�ð� ���   ��\n");
	printf(" �������������\n");
	printf("\n");
	printf(" ������ �ҿ�ð��� ����մϴ�.\n");
	printf(" ���� �ҿ�ð��� 1ȣ�� ���� ���ʴ�� �Է��մϴ�\n");
	printf(" 1ȣ�� �ҿ�꿡������õ������ �ҿ�ð� ��) 3 \n");
	printf("\n\n");
	
	plist->weigh = NULL;

	while (plist!=NULL)

	{
										
		scanf("%d", &plist->weigh);				
		plist = plist->next;		
	

	}

	printf("==============================================\n");
	printf(" *����� �Ϸ�Ǿ����ϴ�*\n");

	printf("�߰��� �ҿ�ð��� ����Ͻðڽ��ϱ�? Y�߰���� N �����ڸ޴�\n");

	scanf("%s", &option);															//�߰� ����� Ȯ���ϴ� option

	if (!strcmp(option,"Y")) {														//�߰����
		while (1)

		{


		}
		printf("==============================================\n");
		printf(" *����� �Ϸ�Ǿ����ϴ�*\n");
	}
	else if (!strcmp(option,"N")) {													//�����ڸ޴��� ���ư�
		system("cls");
		Administer_print();
		return plist;

	}
};