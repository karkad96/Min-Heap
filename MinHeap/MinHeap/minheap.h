#pragma once

#include <stdio.h>
#include <stdlib.h>

class minHeap
{
public:
	minHeap(int size);
	~minHeap();

private:
	int* pArr;
};