
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "D:\\이정윤\\visual studio\\SeoulSubway\\include\\SeoulSubway.h"
#include "D:\\이정윤\\visual studio\\SeoulSubway\\include\\mydef.h"


int Register_weigh_time(Subway *head, Subway *tail,Subway *new,int *Register_weigh_count) {

	int weigh_count = 0;
	int option = 0;
	new = (Subway*)malloc(sizeof(Subway*));
	printf("\n");
	printf(" □■□■□■□■□■□■\n");
	printf(" ■    소요시간 등록   □\n");
	printf(" □■□■□■□■□■□■\n");
	printf("\n");
	printf(" 역간의 소요시간을 등록합니다.\n");
	printf(" 역과 소요시간은 1호선 부터 차례대로 입력합니다\n");
	printf(" 1호선 소요산에서동두천까지의 소요시간 예) 3 \n");
	printf("\n\n");

	printf("입력할 소요시간 개수 입력\n");
	scanf("%d", &weigh_count);
	printf("소요시간 입력\n");

	while (*Register_weigh_count < weigh_count) {
		scanf("%d", new->weigh);

		(*Register_weigh_count)++;

	}

	printf("==============================================\n");
	printf(" *등록이 완료되었습니다*\n");

	printf("추가로 노선을 등록하시겠습니까? Y추가등록 N 관리자메뉴\n");
	rewind(stdin);
	scanf("%c", &option);


	if (option == 'Y') {
		printf(" 입력할 역의 개수 입력:");
		scanf("%d", &weigh_count);
		printf(" 역이름 입력:");


		int org_i = *Register_weigh_count;

		while (*Register_weigh_count < weigh_count + org_i) {

			scanf("%s", new->weigh+ (*Register_weigh_count)++);

			(*Register_weigh_count)++;
		}
		printf("==============================================\n");
		printf(" *등록이 완료되었습니다*\n");
		printf("%d", *Register_weigh_count);
	}                                                                                                                                                                                                                           
	else if (option == 'N') {
			system("cls");
			Administer_mode();

			return 0;
	}
};