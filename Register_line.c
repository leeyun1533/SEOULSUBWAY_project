#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include "D:\\이정윤\\visual studio\\SeoulSubway\\include\\SeoulSubway.h"
#include "D:\\이정윤\\visual studio\\SeoulSubway\\include\\mydef.h"



int Register_line(int *Register_line_count) {


	


	Subway *p = (Subway*)malloc(sizeof(Subway *)/**10*/);
	int station_count = 0;
	

	char option;
	printf("\n");
	printf(" □■□■□■□■□■\n");
	printf(" ■     노선등록   □\n");
	printf(" □■□■□■□■□■\n");
	printf("\n");
	printf(" 노선 이름과 역을 입력받아 노선을 생성합니다.\n");
	printf(" 역은 1호선 부터 차례대로 입력합니다\n");
	printf(" 예) 소요산 동두천 동두천중앙\n");
	printf("\n\n");

	printf(" 입력할 역의 개수 입력:");
	scanf("%d", &station_count);
	printf(" 역이름 입력:");

	rewind(stdin);
	while (*Register_line_count < station_count) {
		scanf("%s", p->station2[*Register_line_count + 1]);
		
		(*Register_line_count)++;

	}
	printf("==============================================\n");
	printf(" *등록이 완료되었습니다*\n");

	printf("추가로 노선을 등록하시겠습니까? Y추가등록 N 관리자메뉴\n");
	rewind(stdin);
	scanf("%c", &option);


	if (option == 'Y') {
		printf(" 입력할 역의 개수 입력:");
		scanf("%d", &station_count);
		printf(" 역이름 입력:");


		int org_i = *Register_line_count;

		while (*Register_line_count < station_count + org_i) {

			scanf("%s", p->station2[*Register_line_count + 1]);

			(*Register_line_count)++;
		}

		printf("==============================================\n");
		printf(" *등록이 완료되었습니다*\n");
		printf("%d", *Register_line_count);
	}
	else if (option == 'N') {
		system("cls");
		Administer_mode();

		return 0;
	}
};