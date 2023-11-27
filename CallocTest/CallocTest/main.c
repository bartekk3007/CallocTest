#include <stdio.h>
#include <stdlib.h>

struct Tree 
{
	int val;
};

int main(void)
{
	int size = 50;

	//struct Tree** dataArr = (struct Tree**) malloc(sizeof(struct Tree*) * size);
	struct Tree** dataArr = (struct Tree**) calloc(size, sizeof(struct Tree*));

	int count = 0;

	/*
	for (int i = 0; i < 50; i++)
	{
		dataArr[i] = NULL;
	}
	*/

	for (int i = 0; i < 50; i++)
	{
		if (dataArr[i] == NULL)
		{
			printf("%d NULL\n", i);
			count++;
		}
	}

	printf("%d\n", count);

	return 0;
}