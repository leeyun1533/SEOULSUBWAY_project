//�Լ��̸�:printPate
//�Լ����:�ִܰŸ� �ּ�ȯ�� �˰����� �����ϰ� option�� ���� ���
//�Է�:����
//���:���ۿ����� ���������� ���İ���,ȯ��Ƚ��,�ð�
//���ϰ�:����
//����������:2017-02-25

#include <windows.h>
#include <string.h>
#include <stdio.h>

#include "SeoulSubway.h"
#include "mydef.h"



void printPath(int parent[MAX], char **numberName, int check[MAX], char start[], int destNumber,int t)
{
	int i = parent[destNumber], cCheck = 0;
	int cCount = 0, Pass_count = 1;
	printf("==================================================================\n");
	printf("     %-14s", numberName[destNumber]);
	

	while (strcmp(numberName[i], start))
	{
		if (!strcmp( numberName[parent[i]],numberName[i]))
		{
			
			
			printf("-> (ȯ��)");
			
			cCount++;	// ȯ�¿� ī��Ʈ
			cCheck = 1;
		}


		else
		{
			if (cCheck == 1)	printf("%-8s", numberName[i]);
			else printf("%s%-14s", "-> ", numberName[i]);
			Pass_count++;  // ������ �� ���� ī��Ʈ
			if (Pass_count % 4 == 0)	printf("\n  ");
			cCheck = 0;
		}
		i = parent[i];

		
	}

	printf("->%s\n      ==> %d���� ����", numberName[i], Pass_count);

	if (check[destNumber] > 150)
	{
		check[destNumber] = check[destNumber]-cCount*(1000);
		if (check[destNumber] / 60)
			{
				printf("%s%d%s%d%s%d%s",    "\n ", check[destNumber] / 60, "�ð� ",check[destNumber] % 60, "�� ", cCount+t, "�� ȯ��. ");
				printf("\n===================================================================");
			}
			else
			{
				printf("%s%d%s%d%s",    "\n ", check[destNumber], "��",cCount+t, "�� ȯ��.");
				printf("\n===================================================================");
			}
	}
	if (check[destNumber] / 60)
	{
		printf("%s%d%s%d%s%d%s", "\n ", check[destNumber] / 60, "�ð� ", check[destNumber] % 60, "�� ", cCount+t, "�� ȯ��. ");
		printf("\n===================================================================");
	}
	else
	{
		printf("%s%d%s%d%s", "\n ", check[destNumber], "��", cCount+t, "�� ȯ��.");
		printf("\n===================================================================");
	}
}
