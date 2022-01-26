#include "../src/FiveWayPartition.h"
#include <iostream>
#include <time.h>
#include "I.h"

using namespace std;

int main() {
	int n = 10;
	I pivot1, pivot2;
	int q1 = 0, q2 = 0, q3 = 0, q4 = 0;
	I *A;

	FiveWayPartition<I>* fwp = new FiveWayPartition<I>();
	A = new I[n];

	srand(time(NULL));
	
	pivot1 = I(rand() % 8);
	pivot2 = I(rand() % 8);
	
	if (pivot1 > pivot2)
		swap(pivot1, pivot2);

	if (pivot1 == pivot2)
	{
		pivot2 = I(pivot1.getValue() + 1);
	}

	cout << "Initial Array:" << endl;
	for (int i = 0; i < n; i++) {
		A[i] = I(rand()%6);
		cout << A[i].getValue() << ", ";
	}	

	fwp->Partition(A, pivot1, pivot2, 0, n-1, q1, q2, q3, q4);

	cout << "\n\nLess than " << pivot1.getValue() << ":" << endl;
	for (int i = 0; i < q1; i++){
		cout << A[i].getValue() << ", ";
	}

	cout << "\n\nEquals to " << pivot1.getValue() << ":" << endl;
	for (int i = q1; i < q2; i++) {
		cout << A[i].getValue() << ", ";
	}

	cout << "\n\nLess than " << pivot2.getValue() << " and greater than "<<  pivot1.getValue() << ":" << endl;
	for (int i = q2; i < q3; i++){
		cout << A[i].getValue() << ", ";
	}

	cout << "\n\nEquals to " << pivot2.getValue() << ":" << endl;
	for (int i = q3; i < q4; i++) {
		cout << A[i].getValue() << ", ";
	}

	cout << "\n\nGreater than " << pivot2.getValue() << ":" << endl;
	for (int i = q4; i < n; i++) {
		cout << A[i].getValue() << ", ";
	}

	int d;
	cin >> d;
}


