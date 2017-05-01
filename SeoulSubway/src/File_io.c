//�Լ��̸�:File_io
//�Լ����:Subway.txt�� �����͸� �����Ͽ� ���Ḯ��Ʈ�� ����
//�Է�:����
//���:����
//���ϰ�:node *t, numberName 
//����������:2017-02-20
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


	fp = open("Subway.txt", O_RDONLY);						//������ �б� ���� ����
	if (fp == -1) {
		printf("������ ���������ʽ��ϴ� ���� �����մϴ�\n");
		fp = open("Subway.txt", O_CREAT | O_RDWR, S_IWRITE | S_IREAD); //������ ���� ���� ���� �� �� ������ ����, �б�,���� �����㰡
	}


		n = read(fp,buf,9423); //���Ͽ���  ���ۿ� 9423����Ʈ��ŭ ������
		close(fp); //���� close

		Newline_p = strtok(buf, "\n"); // ������ �����Ͱ� ����ִ� buf���� strtok�Լ��� �̿��� \n�� ���ý� �� ���� ��ū���� �߶� Newline_p�� ����
		while (Newline_p != NULL) {
			Newline_buf[i] = Newline_p; 
											//�� �̻� buf�� ��ū���� ������ ���������� Newline_buf[i] �����͹迭�� ��ū�� ����
			Newline_p = strtok(NULL, "\n");
			i++;
		}

		count = 0;
		while (Newline_buf[k] != NULL) {                     //���̻� buf�� ��ū���� ������ ���� ������ �������� ����



			Spacing_p = strtok(Newline_buf[k], "\t");         // Newline_buf[k] ������ �迭�� ����� �� ������ tab������ ����

			num1 = Spacing_p;								//num1�� ���� ���� ��ȣ ����
			Spacing_p = strtok(NULL, "\t");					//tab���� ��ū ����
			str_tol = num1;									//���ڿ������� num1�� int������ �ٲ��ֱ������۾�
			value = strtol(str_tol, &ptr, 10);				//
			num2 = Spacing_p;								
			Spacing_p = strtok(NULL, "\t");
			str_tol2 = num2;
			value2 = strtol(str_tol2, &ptr2, 10);
			weigh = Spacing_p;
			Spacing_p = strtok(NULL, "\t");
			str_tol3 = weigh;
			value3 = strtol(str_tol3, &ptr3, 10);
			Subway_Struct->station[value] = Spacing_p;			//�ӽñ���ü�� ���� �̸��� ����
			Spacing_p = strtok(NULL, "\t");
			Subway_Struct->station2[value2] = Spacing_p;
			Spacing_p = strtok(NULL, "\t");

			count++;	
			k++;

			t = (node*)malloc(sizeof(node));					//t�� �����Ҵ�
			t->number = value2;										
			t->weight = value3;	
			t->next = station[value];								//t�� ������ station�����͹迭�� ����Ű�� ������ ��.
			station[value] = t;

			t = (node*)malloc(sizeof(node));
			t->number = value;
			t->weight = value3;
			t->next = station[value2];
			station[value2] = t;

			numberName[value] = Subway_Struct->station[value];  //numberName �迭�� �ӽ������س��� ���̸����� ����
			numberName[value2] = Subway_Struct->station2[value2];

		}

	

	return Subway_Struct;
}