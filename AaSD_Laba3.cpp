#include <iostream>
#include "BinarySearchTree.h"

int main() {
	BinarySearchTree tree;

	int arr[] = {100,59,14,2,17,102,120,110};

	std::cout << "Order of adding to three: " << std::endl;
	for (size_t i = 0; i < sizeof(arr) / sizeof(int); i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;

	for (size_t i = 0; i < sizeof(arr) / sizeof(int); i++)
		tree.insert(arr[i]);

	std::cout << std::endl << "Depth traversing: " << std::endl;
	DepthIterator di = tree.create_dft_iterator();

	for (di; di.has_next(); di.next())
		std::cout << di.get_value() << ' ';
	std::cout << std::endl;


	std::cout << std::endl << "Breadth traversing: " << std::endl;
	BreadthIterator bi = tree.create_bft_iterator();

	for (bi; bi.has_next(); bi.next())
		std::cout << bi.get_value() << ' ';

	std::cout << std::endl;

	return 0;
}