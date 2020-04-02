#include "minheap.h"

int main(int argc, char* argv[])
{
	minHeap* pMinHeap = new minHeap(8, RND);
	
	pMinHeap->printMinHeap();
	pMinHeap->heapSort();
	pMinHeap->printMinHeap();
	
	return 0;
}