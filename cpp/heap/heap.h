#ifndef HEAP_H_
#define HEAP_H_

#include <vector>

class Heap
{
	private:
		std::vector< int > _data;
		void heapify(int index);
	public:
		Heap(std::vector<int> data = std::vector<int>());
		void insert(int element);
		int extractMax();
		std::vector< int > sort();
};

#endif