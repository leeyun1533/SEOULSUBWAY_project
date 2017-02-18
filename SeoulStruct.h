typedef struct SeoulSubway{
	struct SeoulSubway *next;
	int number;
	int weight;

}Subway;


typedef struct stationinfo{
	char *numberName[400];
	int check[400];
	int nheap;
	int heap[400];
}Short_node;