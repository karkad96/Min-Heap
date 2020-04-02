#include "minheap.h"

minHeap::minHeap(int size, int rnd)
{
	this->size = size;

	pArr = (int*)calloc(size, sizeof(int));

	if (rnd == RND)
	{
		srand(time(NULL));

		for (int i = 0; i < size; i++)
		{
			pArr[i] = rand() % 100;
			printf("%d\n", pArr[i]);
		}
	}
}

minHeap::~minHeap()
{
}

int minHeap::parent(int i)
{
	return i / 2;
}

int minHeap::left(int i)
{
	return 2 * i;
}

int minHeap::right(int i)
{
	return 2 * i + 1;
}
