#include <iostream>
#include "../src/SelectionSort.h"
#include "./X.h"

using namespace std;

void testSorting()
{
	int		i, n = 10;
	ISort<int>*	sorter;
	int		*A;

	sorter = new SelectionSort<int>();
	A = new int[n];

	for (i = 0; i < n; i++)
		A[i] = rand();

	cout << "Initial array:\n";
	for (i = 0; i < n; i++)
	{
		cout << A[i] << " , ";
	}

	sorter->Sort(A, n);

	cout << "\n\nSorted array:\n";
	for (i = 0; i < n; i++)
	{
		cout << A[i] << " , ";
	}

	delete[] A;
	delete sorter;
}

void testTemplate()
{
	int i, n=20;
	ISort<X>*	sorter;
	sorter = new SelectionSort<X>();

	X*	A;
	A = new X[n];

	for (i = 0; i < n; i++)
		A[i] = rand();

	for (i = 0; i < n; i++)
		A[i] = rand();

	cout << "Initial array:\n";
	for (i = 0; i < n; i++)
	{
		cout << A[i] << " , ";
	}

	sorter->Sort(A, n);

	cout << "\n\nSorted array:\n";
	for (i = 0; i < n; i++)
	{
		cout << A[i] << " , ";
	}

	delete[] A;
	delete sorter;
}

int main()
{
	cout << "Test 1. Sorting" << std::endl;
	testSorting();


	cout << "\n\n\n";
	cout << "---------------------------------------------" << std::endl;
	cout << "Test 2. Template" <<std::endl;
	testTemplate();

	int dummy;
	cin >> dummy;
}

