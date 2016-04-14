#include "QuickSortRandom.h"
#include "QuickSortHoare.h"
#include "Common.h"

void test_quick_sort_random() {
	int A[] = {10, 2, 345, 28, 382, 1, 384, 892, 2, 381, 34, 58, 2, 82, 82, 94, 82, 1, 84, 82, 284, 82};
	std::vector<int> V(A, A + sizeof(A) / sizeof(A[0]));

	QuickSortRandom<int> sort;
	Common<int> common;
	common.PrintVector(V);
	//sort.SortAscending(V);
	sort.SortDescending(V);
	common.PrintVector(V);	
}

void test_quick_sort_hoare() {
	int A[] = {10, 2, 345, 28, 382, 1, 384, 892, 2, 381, 34, 58, 2, 82, 82, 94, 82, 1, 84, 82, 284, 82};
	//int A[] = {5, 3, 2, 6, 4, 1, 3, 7};
	std::vector<int> V(A, A + sizeof(A) / sizeof(A[0]));

	QuickSortHoare<int> sort;
	Common<int> common;
	common.PrintVector(V);
	sort.Sort(V);
	common.PrintVector(V);	
}

int main() {
	//test_quick_sort_random();
	test_quick_sort_hoare();
	
	return 0;
}
