#include "minheap.h"

int main(int argc, char* argv[])
{
	minHeap* pMinHeap = new minHeap(10);

	printf("%d\n", pMinHeap->parent(8));
	
	system("pause");
	
	return 0;
}