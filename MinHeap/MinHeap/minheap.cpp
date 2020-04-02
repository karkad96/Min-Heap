#include "minheap.h"

minHeap::minHeap(int size)
{
	pArr = (int*)calloc(size, sizeof(int));
}

minHeap::~minHeap()
{
}
