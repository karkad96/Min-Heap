#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RND 1
#define REA 5

class minHeap
{
public:
	minHeap(int length, int rnd=0);
	~minHeap();

	void printMinHeap();
	void minHeapify(int i);
	void buildMinHeap();
	void heapSort();

	int parent(int i);
	int left(int i);
	int right(int i);

private:
	int* pArr;
	int heapSize;
	int length;
};