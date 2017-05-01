//함수이름:
//함수기능:
//입력:
//출력:
//리턴값:
//최종수정일:

#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include "SeoulSubway.h"
#include "mydef.h"

#define _CRT_SECURE_NO_WARNINGS
#define _GNU_SOURCE
#pragma warning (disable:4996)

int  Prefer_line(int *Prefer_count) {
	char option;
	int count = 0;
	Fv p;
	int fp;
	char *buf[200];
	int len=0;

	fp = open("Fv_line.txt", O_RDONLY);
	if (fp == -1) {
		printf("파일이 존재하지않습니다 새로 생성합니다\n");
		fp = open("Fv_line.txt", O_CREAT | O_RDWR, S_IWRITE | S_IREAD);
	}
	
	printf("선호하는 노선과 선호하는 환승역을 입력합니다\n");
	printf("예)8호선 왕십리\n");
	printf("입력할 선호노선,역 개수 입력\n");
	scanf("%d", &count);
	

	while (*Prefer_count < count) {
		printf("노선입력\n");
		scanf("%s", p.Fv_lineName[*Prefer_count+ 1]);
		printf("환승역 입력:\n");		
		scanf("%s", p.Fv_StationName[*Prefer_count + 1]);
		buf[*Prefer_count] = p.Fv_StationName[*Prefer_count + 1];
		(*Prefer_count)++;

	}	


	printf("==============================================\n");
	printf(" *등록이 완료되었습니다*\n");

	printf("추가로 노선을 등록하시겠습니까? Y추가등록 N 관리자메뉴\n");
	scanf("%c", &option);




	if (option == 'Y') {
		printf(" 입력할 역의 개수 입력:");
		scanf("%d", &count);

			int org_i = *Prefer_count;
			printf(" 선호노선입력:\n");
			while (*Prefer_count < count + org_i) {
			scanf("%s",p.Fv_lineName[*Prefer_count + 1]);
			printf("환승역 입력:\n");
			scanf("%s",p.Fv_StationName[*Prefer_count + 1]);
			(*Prefer_count)++;
		}
		printf("==============================================\n");
		printf(" *등록이 완료되었습니다*\n");
		printf("%d", *Prefer_count);

	}
	else if (option == 'N') {
		system("cls");
		main();

		return 0;
	}
	


}