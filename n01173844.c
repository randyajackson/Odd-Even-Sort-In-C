/************************
Randy Jackson N01173844
Assignment 2 COP3530
1/28/17
***********************/
#include "my.h"

int main(int argc, char *argv[])
{

int size = 0;

FILE *p = fopen(argv[1], "r");

//retrieving size of array
fscanf(p, "%d", &size);

int *data;

data = (int*)calloc(size, sizeof(int));

int i = 0;
//filling array
	for(i = 0; i < size; i++)
	{
	fscanf(p, "%d", &data[i] );
	}

fclose(p);

oddEven(data, size); 

search(data, size);

}
