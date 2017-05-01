//함수이름:Register_weigh_time
//함수기능:소요시간등록
//입력:역간의 소요시간
//출력:소요시간 등록성공,실패 메시지
//리턴값:Register_weigh_count
//최종수정일:2017-03-13
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
	printf(" □■□■□■□■□■□■\n");
	printf(" ■    소요시간 등록   □\n");
	printf(" □■□■□■□■□■□■\n");
	printf("\n");
	printf(" 역간의 소요시간을 등록합니다.\n");
	printf(" 역과 소요시간은 1호선 부터 차례대로 입력합니다\n");
	printf(" 1호선 소요산에서동두천까지의 소요시간 예) 3 \n");
	printf("\n\n");
	
	plist->weigh = NULL;

	while (plist!=NULL)

	{
										
		scanf("%d", &plist->weigh);				
		plist = plist->next;		
	

	}

	printf("==============================================\n");
	printf(" *등록이 완료되었습니다*\n");

	printf("추가로 소요시간을 등록하시겠습니까? Y추가등록 N 관리자메뉴\n");

	scanf("%s", &option);															//추가 등록을 확인하는 option

	if (!strcmp(option,"Y")) {														//추가등록
		while (1)

		{


		}
		printf("==============================================\n");
		printf(" *등록이 완료되었습니다*\n");
	}
	else if (!strcmp(option,"N")) {													//관리자메뉴로 돌아감
		system("cls");
		Administer_print();
		return plist;

	}
};