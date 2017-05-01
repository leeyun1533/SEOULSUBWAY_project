

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
	printf(" □■□■□■□■□■□■\n");
	printf(" ■    장애구간 등록   □\n");
	printf(" □■□■□■□■□■□■\n");
	printf("\n");
	printf(" 장애 역을 등록합니다.\n");
	printf(" 장애 역을 입력 예) 장한평 \n");
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
	printf(" *등록이 완료되었습니다*\n");

	printf("추가로 장애 역을 등록하시겠습니까? Y추가등록 N 관리자메뉴\n");

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
		printf(" *등록이 완료되었습니다*\n");
	}
	else if (!strcmp(option, "N")) {
		system("cls");
		Administer_mode();


	}
	
};