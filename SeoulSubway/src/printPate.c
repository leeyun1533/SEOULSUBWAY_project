//함수이름:printPate
//함수기능:최단거리 최소환승 알고리즘을 실행하고 option에 따라 출력
//입력:없음
//출력:시작역에서 도착역까지 거쳐간역,환승횟수,시간
//리턴값:없음
//최종수정일:2017-02-25

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
			
			
			printf("-> (환승)");
			
			cCount++;	// 환승역 카운트
			cCheck = 1;
		}


		else
		{
			if (cCheck == 1)	printf("%-8s", numberName[i]);
			else printf("%s%-14s", "-> ", numberName[i]);
			Pass_count++;  // 지나온 역 숫자 카운트
			if (Pass_count % 4 == 0)	printf("\n  ");
			cCheck = 0;
		}
		i = parent[i];

		
	}

	printf("->%s\n      ==> %d개역 지남", numberName[i], Pass_count);

	if (check[destNumber] > 150)
	{
		check[destNumber] = check[destNumber]-cCount*(1000);
		if (check[destNumber] / 60)
			{
				printf("%s%d%s%d%s%d%s",    "\n ", check[destNumber] / 60, "시간 ",check[destNumber] % 60, "분 ", cCount+t, "번 환승. ");
				printf("\n===================================================================");
			}
			else
			{
				printf("%s%d%s%d%s",    "\n ", check[destNumber], "분",cCount+t, "번 환승.");
				printf("\n===================================================================");
			}
	}
	if (check[destNumber] / 60)
	{
		printf("%s%d%s%d%s%d%s", "\n ", check[destNumber] / 60, "시간 ", check[destNumber] % 60, "분 ", cCount+t, "번 환승. ");
		printf("\n===================================================================");
	}
	else
	{
		printf("%s%d%s%d%s", "\n ", check[destNumber], "분", cCount+t, "번 환승.");
		printf("\n===================================================================");
	}
}
