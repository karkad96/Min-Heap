#include "minheap.h"

minHeap::minHeap(int size)
{
	pArr = (int*)calloc(size, sizeof(int));
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
