#include "SeoulSubway.h"
#include "mydef.h"


void Short_line_F(node *t, char **numberName,char *station[], char start[], char dest[], int  check1[],int  heap[],int  parent[],int  option, int Destnumber){
	system("cls");
	Option_Print(option);

	showfirst(numberName, dest, start, 400);
	Destnumber = Algorithm(t, numberName, station, start, dest, 358, check1, heap, parent, option, 0);
	if (Destnumber == -1)
	{
		printf("\nERROR �ִܰŸ� ����");
	}
	else { printPath(parent, numberName, check1, start, Destnumber, 0); }
	printf("\n�߰��� �˻��Ͻðڽ��ϱ�? Y(�ٽð˻�) N(����ڸ޴�) \n");
	
}