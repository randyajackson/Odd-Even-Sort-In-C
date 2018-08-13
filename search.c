#include "my.h"

void search(int *arr, int length)
{

int input = 0;

	while(input != -1)
	{
	printf("\nEnter index to query or -1 to exit: ");
	scanf("%d", &input);
		if(input != -1)
		{
		printf("\n %d", arr[input]);
		}
	}

printf("\nThe End\n");
return;

}
