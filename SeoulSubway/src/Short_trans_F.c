#include "SeoulSubway.h"
#include "mydef.h"

void Short_trans_F(node *t, char **numberName, char *station[], char start[], char dest[], int  check1[], int  heap[], int  parent[], int  option, int Destnumber, int short_destnumber, int T) {



	Option_Print(option);
	showfirst(numberName, dest, start, 400);
	Destnumber = Algorithm(t, numberName, station, start, dest, 358, check1, heap, parent, 2);
	if (Destnumber == -1)
	{
		printf("\nERROR 최단거리 실패");
	}
	else { printPath(parent, numberName, check1, start, Destnumber, T + 1); }
}