
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "D:\\������\\visual studio\\SeoulSubway\\include\\SeoulSubway.h"
#include "D:\\������\\visual studio\\SeoulSubway\\include\\mydef.h"


int Register_weigh_time(Subway *head, Subway *tail,Subway *new,int *Register_weigh_count) {

	int weigh_count = 0;
	int option = 0;
	new = (Subway*)malloc(sizeof(Subway*));
	printf("\n");
	printf(" �������������\n");
	printf(" ��    �ҿ�ð� ���   ��\n");
	printf(" �������������\n");
	printf("\n");
	printf(" ������ �ҿ�ð��� ����մϴ�.\n");
	printf(" ���� �ҿ�ð��� 1ȣ�� ���� ���ʴ�� �Է��մϴ�\n");
	printf(" 1ȣ�� �ҿ�꿡������õ������ �ҿ�ð� ��) 3 \n");
	printf("\n\n");

	printf("�Է��� �ҿ�ð� ���� �Է�\n");
	scanf("%d", &weigh_count);
	printf("�ҿ�ð� �Է�\n");

	while (*Register_weigh_count < weigh_count) {
		scanf("%d", new->weigh);

		(*Register_weigh_count)++;

	}

	printf("==============================================\n");
	printf(" *����� �Ϸ�Ǿ����ϴ�*\n");

	printf("�߰��� �뼱�� ����Ͻðڽ��ϱ�? Y�߰���� N �����ڸ޴�\n");
	rewind(stdin);
	scanf("%c", &option);


	if (option == 'Y') {
		printf(" �Է��� ���� ���� �Է�:");
		scanf("%d", &weigh_count);
		printf(" ���̸� �Է�:");


		int org_i = *Register_weigh_count;

		while (*Register_weigh_count < weigh_count + org_i) {

			scanf("%s", new->weigh+ (*Register_weigh_count)++);

			(*Register_weigh_count)++;
		}
		printf("==============================================\n");
		printf(" *����� �Ϸ�Ǿ����ϴ�*\n");
		printf("%d", *Register_weigh_count);
	}                                                                                                                                                                                                                           
	else if (option == 'N') {
			system("cls");
			Administer_mode();

			return 0;
	}
};