#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#pragma warning (disable:4996)
#define _GNU_SOURCE
#define _CRT_SECURE_NO_WARNINGS

#include "D:\\이정윤\\visual studio\\SeoulSubway\\include\\SeoulSubway.h"
#include "D:\\이정윤\\visual studio\\SeoulSubway\\include\\mydef.h"
#include "File_io.h"


int File_io(Subway *head, Subway *tail, Subway *new, long weigh_data[][MAX], int *s, int *e) {

	
	
	int fp;
	int res = 0;
	int n;
	int buf[20000];
	char* Newline_p;
	char *Spacing_p=(char *)malloc(sizeof(char *));
	char* Newline_buf[50] = { NULL };
	char* Spacing_buf[10] = { NULL };
	char *weigh = NULL;
	int count;
	int i = 0; int j = 0; int k = 0;
	char *num1,*num2;
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

	head = NULL;
	tail = NULL;

	Subway S;
	Subway *Subway_Struct = &S;
	if (Subway_Struct == NULL) {
		printf("error");
	}


	fp = open("D:\\이정윤\\visual studio\\SeoulSubway\\bin\\subway.txt", O_RDONLY);
	if (fp == -1) {
		printf("파일이 존재하지않습니다 새로 생성합니다\n");
		fp = open("D:\\이정윤\\visual studio\\SeoulSubway\\bin\\subway.txt", O_CREAT | O_RDWR, S_IWRITE | S_IREAD);
	}
	n = read(fp, buf,300);


	Newline_p = strtok(buf, "\n");
	while (Newline_p != NULL) {
		Newline_buf[i] = Newline_p;
		
		Newline_p = strtok(NULL, "\n");
		i++;
	}

	count = 0;
	while (Newline_buf[k] != NULL) {

		new = (Subway*)malloc(sizeof(Subway));

	

		Spacing_p = strtok(Newline_buf[k], "\t");
	
		num1 = Spacing_p;
		Spacing_p = strtok(NULL, "\t");
		str_tol = num1;
		value = strtol(str_tol, &ptr, 10);
		num2 = Spacing_p;
		Spacing_p = strtok(NULL, "\t");
		str_tol2 = num2;
		value2 = strtol(str_tol2, &ptr2, 10);
		weigh = Spacing_p;
		Spacing_p = strtok(NULL, "\t");
		str_tol3 = weigh;
		value3= strtol(str_tol3, &ptr3, 10);
		Subway_Struct->station[value] = Spacing_p;
		Spacing_p = strtok(NULL, "\t");

		count++;
		j++;
		k++;

		
		Subway_Struct->weigh[count] = value3;
		Subway_Struct->Main[count] = value;
		Subway_Struct->sub[count] = value2;

		printf("%d %d %d %s\n", Subway_Struct->Main[count], Subway_Struct->sub[count], Subway_Struct->weigh[count], Subway_Struct->station[count]);
	}

	return Subway_Struct;
}