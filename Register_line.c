#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include "D:\\������\\visual studio\\SeoulSubway\\include\\SeoulSubway.h"
#include "D:\\������\\visual studio\\SeoulSubway\\include\\mydef.h"



int Register_line(int *Register_line_count) {


	


	Subway *p = (Subway*)malloc(sizeof(Subway *)/**10*/);
	int station_count = 0;
	

	char option;
	printf("\n");
	printf(" �����������\n");
	printf(" ��     �뼱���   ��\n");
	printf(" �����������\n");
	printf("\n");
	printf(" �뼱 �̸��� ���� �Է¹޾� �뼱�� �����մϴ�.\n");
	printf(" ���� 1ȣ�� ���� ���ʴ�� �Է��մϴ�\n");
	printf(" ��) �ҿ�� ����õ ����õ�߾�\n");
	printf("\n\n");

	printf(" �Է��� ���� ���� �Է�:");
	scanf("%d", &station_count);
	printf(" ���̸� �Է�:");

	rewind(stdin);
	while (*Register_line_count < station_count) {
		scanf("%s", p->station2[*Register_line_count + 1]);
		
		(*Register_line_count)++;

	}
	printf("==============================================\n");
	printf(" *����� �Ϸ�Ǿ����ϴ�*\n");

	printf("�߰��� �뼱�� ����Ͻðڽ��ϱ�? Y�߰���� N �����ڸ޴�\n");
	rewind(stdin);
	scanf("%c", &option);


	if (option == 'Y') {
		printf(" �Է��� ���� ���� �Է�:");
		scanf("%d", &station_count);
		printf(" ���̸� �Է�:");


		int org_i = *Register_line_count;

		while (*Register_line_count < station_count + org_i) {

			scanf("%s", p->station2[*Register_line_count + 1]);

			(*Register_line_count)++;
		}

		printf("==============================================\n");
		printf(" *����� �Ϸ�Ǿ����ϴ�*\n");
		printf("%d", *Register_line_count);
	}
	else if (option == 'N') {
		system("cls");
		Administer_mode();

		return 0;
	}
};