#include "minheap.h"

minHeap::minHeap(int size, int rnd)
{
	this->size = size;

	pArr = (int*)calloc(size, sizeof(int));

	if (rnd == RND)
	{
		srand(time(NULL));

		for (int i = 0; i < size; i++)
			pArr[i] = rand() % 100;

	}
}

minHeap::~minHeap()
{
	free(pArr);
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

void minHeap::minHeapify(int i)
{
	int mn = INT_MAX;
	int l = left(i);
	int r = right(i);

	if (l <= size && pArr[l] < pArr[i])
		mn = l;
	else
		mn = i;
	if (r <= size && pArr[r] < pArr[mn])
		mn = r;

	if (mn != i)
	{
		int tmp = pArr[mn];
		pArr[mn] = pArr[i];
		pArr[i] = tmp;

		minHeapify(mn);
	}
}

void minHeap::buildMinHeap()
{
	for (int i = size / 2 - 1; i >= 0; i--)
	{
		minHeapify(i);
	}
}
