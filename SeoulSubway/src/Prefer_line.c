//�Լ��̸�:
//�Լ����:
//�Է�:
//���:
//���ϰ�:
//����������:

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
		printf("������ ���������ʽ��ϴ� ���� �����մϴ�\n");
		fp = open("Fv_line.txt", O_CREAT | O_RDWR, S_IWRITE | S_IREAD);
	}
	
	printf("��ȣ�ϴ� �뼱�� ��ȣ�ϴ� ȯ�¿��� �Է��մϴ�\n");
	printf("��)8ȣ�� �սʸ�\n");
	printf("�Է��� ��ȣ�뼱,�� ���� �Է�\n");
	scanf("%d", &count);
	

	while (*Prefer_count < count) {
		printf("�뼱�Է�\n");
		scanf("%s", p.Fv_lineName[*Prefer_count+ 1]);
		printf("ȯ�¿� �Է�:\n");		
		scanf("%s", p.Fv_StationName[*Prefer_count + 1]);
		buf[*Prefer_count] = p.Fv_StationName[*Prefer_count + 1];
		(*Prefer_count)++;

	}	


	printf("==============================================\n");
	printf(" *����� �Ϸ�Ǿ����ϴ�*\n");

	printf("�߰��� �뼱�� ����Ͻðڽ��ϱ�? Y�߰���� N �����ڸ޴�\n");
	scanf("%c", &option);




	if (option == 'Y') {
		printf(" �Է��� ���� ���� �Է�:");
		scanf("%d", &count);

			int org_i = *Prefer_count;
			printf(" ��ȣ�뼱�Է�:\n");
			while (*Prefer_count < count + org_i) {
			scanf("%s",p.Fv_lineName[*Prefer_count + 1]);
			printf("ȯ�¿� �Է�:\n");
			scanf("%s",p.Fv_StationName[*Prefer_count + 1]);
			(*Prefer_count)++;
		}
		printf("==============================================\n");
		printf(" *����� �Ϸ�Ǿ����ϴ�*\n");
		printf("%d", *Prefer_count);

	}
	else if (option == 'N') {
		system("cls");
		main();

		return 0;
	}
	


}