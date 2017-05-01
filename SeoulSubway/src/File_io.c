//함수이름:File_io
//함수기능:Subway.txt의 데이터를 가공하여 연결리스트로 만듬
//입력:없음
//출력:없음
//리턴값:node *t, numberName 
//최종수정일:2017-02-20
//
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#pragma warning (disable:4996)
#define _GNU_SOURCE
#define _CRT_SECURE_NO_WARNINGS

#include "SeoulSubway.h"
#include "mydef.h"


Subway* File_io(node *t, char **numberName, node**station, Subway *head, Subway *tail, Subway *new) {




	int fp;
	int res = 0;
	int n;
	char buf[30000] = {NULL};
	char* Newline_p=malloc(1000);
	char *Spacing_p = (char *)malloc(sizeof(char ));
	char* Newline_buf[1000]= { (char **)malloc(sizeof(char *) * 10000) };
	char* Spacing_buf[1000] = { (char **)malloc(sizeof(char *) * 10000) };
	char *weigh = NULL;
	int count;
	int i = 0; int j = 0; int k = 0;
	char *num1, *num2;
	char *str_tol;
	char *str_tol2;
	char *str_tol3;
	char *ptr;
	char *ptr2;
	char *ptr3;
	long value;
	long value2;
	long value3;
	char *context = NULL;
	//node *t = (node *)malloc(sizeof(node*));


	if (Newline_buf == NULL) {
		printf("Malloc error");
	}
	if (Newline_p == NULL) {
		printf("Malloc error");
	}
	if (Spacing_p == NULL) {
		printf("Malloc error");
	}
	for (int i = 0; i < 400; i++) {
		numberName[i] = (char*)calloc(20, sizeof(char));

	}


	head = NULL;
	tail = NULL;

	Subway S;
	Subway *Subway_Struct = &S;

	if (Subway_Struct == NULL) {
		printf("error");
	}


	fp = open("Subway.txt", O_RDONLY);						//파일을 읽기 모드로 오픈
	if (fp == -1) {
		printf("파일이 존재하지않습니다 새로 생성합니다\n");
		fp = open("Subway.txt", O_CREAT | O_RDWR, S_IWRITE | S_IREAD); //파일이 존재 하지 않을 시 새 파일을 생성, 읽기,쓰기 권한허가
	}


		n = read(fp,buf,9423); //파일에서  버퍼에 9423바이트만큼 저장함
		close(fp); //파일 close

		Newline_p = strtok(buf, "\n"); // 파일의 데이터가 들어있는 buf에서 strtok함수를 이용해 \n이 나올시 그 줄을 토큰으로 잘라 Newline_p에 저장
		while (Newline_p != NULL) {
			Newline_buf[i] = Newline_p; 
											//더 이상 buf를 토큰으로 나눌수 없을때까지 Newline_buf[i] 포인터배열에 토큰을 저장
			Newline_p = strtok(NULL, "\n");
			i++;
		}

		count = 0;
		while (Newline_buf[k] != NULL) {                     //더이상 buf를 토큰으로 나눌수 없을 때까지 루프문을 돌림



			Spacing_p = strtok(Newline_buf[k], "\t");         // Newline_buf[k] 포인터 배열에 저장된 각 라인을 tab단위로 구분

			num1 = Spacing_p;								//num1에 현재 역의 번호 저장
			Spacing_p = strtok(NULL, "\t");					//tab으로 토큰 나눔
			str_tol = num1;									//문자열형태인 num1을 int형으로 바꿔주기위한작업
			value = strtol(str_tol, &ptr, 10);				//
			num2 = Spacing_p;								
			Spacing_p = strtok(NULL, "\t");
			str_tol2 = num2;
			value2 = strtol(str_tol2, &ptr2, 10);
			weigh = Spacing_p;
			Spacing_p = strtok(NULL, "\t");
			str_tol3 = weigh;
			value3 = strtol(str_tol3, &ptr3, 10);
			Subway_Struct->station[value] = Spacing_p;			//임시구조체에 역의 이름을 저장
			Spacing_p = strtok(NULL, "\t");
			Subway_Struct->station2[value2] = Spacing_p;
			Spacing_p = strtok(NULL, "\t");

			count++;	
			k++;

			t = (node*)malloc(sizeof(node));					//t를 동적할당
			t->number = value2;										
			t->weight = value3;	
			t->next = station[value];								//t의 다음을 station포인터배열이 가르키는 것으로 함.
			station[value] = t;

			t = (node*)malloc(sizeof(node));
			t->number = value;
			t->weight = value3;
			t->next = station[value2];
			station[value2] = t;

			numberName[value] = Subway_Struct->station[value];  //numberName 배열에 임시저장해놨던 역이름들을 저장
			numberName[value2] = Subway_Struct->station2[value2];

		}

	

	return Subway_Struct;
}