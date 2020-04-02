#pragma once

#include <stdio.h>
#include <stdlib.h>

class minHeap
{
public:
	minHeap(int size);
	~minHeap();

	int parent(int i);
	int left(int i);
	int right(int i);

private:
	int* pArr;
};