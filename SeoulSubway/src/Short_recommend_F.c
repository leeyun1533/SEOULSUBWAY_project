
#include "SeoulSubway.h"
#include "mydef.h"

void Short_recommend_F(node *t, char **numberName, char *station[], char start[], char dest[], int  check1[], int  heap[], int  parent[], int  option, int Destnumber, int short_destnumber,int T) {

	Option_Print(option);
	showfirst(numberName, dest, start, 400);
	Destnumber = Algorithm(t, numberName, station, start, dest, 400, check1, heap, parent, 2);
	if (Destnumber == -1)
	{
		printf("\nERROR 최단거리 실패");
	}
	short_destnumber = Algorithm(t, numberName, station, start, dest, 400, check1, heap, parent, 1);
	if (short_destnumber == -1)
	{
		printf("\nERROR 최단거리 실패");
	}

	else
	{
		if (check1[Destnumber] < check1[short_destnumber])
		{
			printPath(parent, numberName, check1, start, short_destnumber, T + 1);

		}
		else
			printPath(parent, numberName, check1, start, Destnumber, T);

	}
}