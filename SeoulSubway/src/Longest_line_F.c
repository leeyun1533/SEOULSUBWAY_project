#include "mydef.h"
#include "SeoulSubway.h"

void Longest_line_F(node *t, char **numberName, char *station[], char start[], char dest[], int  check1[], int  heap[], int  parent[], int  option, int Destnumber, int long_destnumber, int T) {


	Option_Print(option);
	showfirst(numberName, dest, start, 400);
	Destnumber = Algorithm(t, numberName, station, start, dest, 358, check1, heap, parent, 1);
	if (Destnumber == -1)
	{
		printf("\nERROR 최단거리 실패");
	}
	long_destnumber = Algorithm(t, numberName, station, start, dest, 358, check1, heap, parent, 2);
	if (Destnumber == -1)
	{
		printf("\nERROR 최단거리 실패");
	}

	else
	{
		if (check1[Destnumber] > check1[long_destnumber])
		{
			printPath(parent, numberName, check1, start, Destnumber, T + 1);
		}
		else
			printPath(parent, numberName, check1, start, long_destnumber, T + 1);

	}
}