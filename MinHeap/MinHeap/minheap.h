#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RND 1
#define REA 5

class minHeap
{
public:
	minHeap(int size, int rnd=0);
	~minHeap();

	void minHeapify(int i);
	void buildMinHeap();

	int parent(int i);
	int left(int i);
	int right(int i);

private:
	int* pArr;
	int size;
};