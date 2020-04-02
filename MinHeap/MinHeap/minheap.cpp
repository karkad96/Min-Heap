#include "minheap.h"

minHeap::minHeap(int length, int rnd)
{
	this->length = length;

	pArr = (int*)calloc(length, sizeof(int));

	if (rnd == RND)
	{
		srand(time(NULL));

		for (int i = 0; i < length; i++)
			pArr[i] = rand() % 100;

		buildMinHeap();
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

	if (l < heapSize && pArr[l] < pArr[i])
		mn = l;
	else
		mn = i;
	if (r < heapSize && pArr[r] < pArr[mn])
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
	heapSize = length;

	for (int i = length / 2 - 1; i >= 0; i--)
	{
		minHeapify(i);
	}
}

void minHeap::heapSort()
{
	buildMinHeap();

	for (int i = length - 1; i >= 1; i--)
	{
		int tmp = pArr[i];
		pArr[i] = pArr[0];
		pArr[0] = tmp;

		heapSize--;
		minHeapify(0);
	}
}

void minHeap::printMinHeap()
{
	for (int i = 0; i < length; i++)
		printf("%d\t", pArr[i]);
	printf("\n");
}
