

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include "SeoulSubway.h"
#include "mydef.h"


void Register_lesion(Linked_node *head, Linked_node *tail, Linked_node *new, int Register_lesion_count) {

	int weigh_count = 0;
	int weight[MAX];
	char roofBreak[10];
	char roofCheck[] = { "exit" };
	char option[10];

	printf("\n");
	printf(" �������������\n");
	printf(" ��    ��ֱ��� ���   ��\n");
	printf(" �������������\n");
	printf("\n");
	printf(" ��� ���� ����մϴ�.\n");
	printf(" ��� ���� �Է� ��) ������ \n");
	printf("\n\n");

	while (1)

	{
		new = (Linked_node*)malloc(sizeof(Linked_node));
		scanf("%d", &new->lestion);
		new->next = NULL;
		new->prev = tail;

		if (tail != NULL)
		{
			tail->next = new;
			tail = new;
		}
		else
		{
			head = new;
			head->prev = NULL;
			tail = head;
		}

			break;



	}
	printf("==============================================\n");
	printf(" *����� �Ϸ�Ǿ����ϴ�*\n");

	printf("�߰��� ��� ���� ����Ͻðڽ��ϱ�? Y�߰���� N �����ڸ޴�\n");

	scanf("%s", &option);

	if (!strcmp(option, "Y")) {
		while (1)

		{
			new = (Linked_node*)malloc(sizeof(Linked_node));
			scanf("%d", &new->weigh);
			new->next = NULL;
			new->prev = tail;

			if (tail != NULL)
			{
				tail->next = new;
				tail = new;
			}
			else
			{
				head = new;
				head->prev = NULL;
				tail = head;
			}


				break;


		}
		printf("==============================================\n");
		printf(" *����� �Ϸ�Ǿ����ϴ�*\n");
	}
	else if (!strcmp(option, "N")) {
		system("cls");
		Administer_mode();


	}
	
};