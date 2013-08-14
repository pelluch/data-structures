#include "heap.h"
#include <cstdlib>

Heap::Heap(std::vector<int> data)
{
	for(size_t i = 0; i < data.size(); ++i)
		insert(data[i]);
}

void Heap::insert(int element)
{

}

int Heap::extractMax()
{
	return 0;
}

std::vector<int> Heap::sort()
{
	std::vector<int> sorted;
	return sorted;
}

void Heap::heapify(int index)
{

}