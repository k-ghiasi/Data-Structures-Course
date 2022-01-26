#include "../src/CountingSort.h"
#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

int main(){
	int	i, res = 0, n = 20;

	CountingSort* sorter;
	sorter = new CountingSort();

	IntegerKey* a = new IntegerKey[n];
	int* b = new int[n];

	srand((unsigned int)time(NULL));

	for (i = 0; i < n; i++){
		a[i] = IntegerKey(rand()%5+5);
		b[i] = a[i].getKey();
	}


	cout << "Initial array:\n";
	for (i = 0; i < n; i++){
		cout << a[i].getKey() << " , ";
	}

	sort(b, b + n);

	cout << "\n\nExpected sorted array:\n";

	for (i = 0; i < n; i++) {
		cout << b[i] << " , ";
	}

	sorter->CountSort(a, n);

	cout << "\n\nSorted array:\n";
	for (i = 0; i < n; i++){
		cout << a[i].getKey() << " , ";
	}

	delete[] a;
	delete[] b;
	delete sorter;

	int dummy;
	cin >> dummy;

	return res;
}
