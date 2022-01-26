#include "../src/DSelect.h"
#include <iostream>
#include <algorithm>
#include <time.h>
#include "I.h"

using namespace std;

int main(){
	int	i, n = 10;
	int tmp;

	int *E;
	DSelect<I>* select;
	select = new DSelect<I>();
	DSelect<int>* bSelect;
	bSelect = new DSelect<int>();

	I	A[10] = {1, 10, 3, 4, 8, 9, 2, 6, 5, 7};
	int	Counts[10] = {110, 180, 245, 350, 470, 570, 680, 800, 900, 1020};

	cout << "----------Order Test-----------" << endl;
	cout << "The Array:\n";
	for (i = 0; i < n; i++){
		// A[i] = rand();
		cout << A[i] << "\t";
	}

	cout << endl << "First Pivot" << ": " << select->choosePivot(A, 0, n-1) << "\t<- Answer is 4";

	cout << "\noutput:\n";
	for (i = 1; i <= n; i++){
		cout << i << ": " << select->select(A, 0, n-1, i) << endl;
		cout << I::counter << "\tless than " << Counts[i-1] << endl << endl;
	}

	
	cout << endl << "----------Equal Test-----------" << endl;
	n = 13;
	tmp = rand() % 18;
	E = new int[n];
	for (i = 0; i < n; i++)
		E[i] = tmp;

	cout << "The Array:\n";
	for (i = 0; i < n; i++){
		cout << E[i] << "\t";
	}
	cout << endl << "First Pivot" << ": " << bSelect->choosePivot(E, 0, n-1) << " <<Answer is " << tmp << endl << endl;

	cout << "Select>" << endl;
	cout << "index\tselect\tanswer" << endl;
	for (i = 0; i < n; i++)
		cout << i+1 << "\t\t" << bSelect->select(E, 0, n-1, i+1) << "\t\t" << tmp << endl;

	delete[] E;


	cout << endl << "--------------Test------------" << endl;

	n = 9;
	int B[9] = {-5, 7, -5, 10, 22, 0, 1, 4, 9};
	int C[9] = {-5, 7, -5, 10, 22, 0, 1, 4, 9};
	
	cout << "The Array:\n";
	for (i = 0; i < n; i++){
		cout << B[i] << "\t";
	}
	cout << endl << "First Pivot" << ": " << bSelect->choosePivot(B, 0, n-1) << " <<Answer is " << 7 << endl << endl;

	sort(C, C+n);
	cout << "Select>" << endl;
	cout << "index\tselect\tanswer" << endl;
	for (i = 0; i < n; i++)
		cout << i+1 << "\t\t" << bSelect->select(B, 0, n-1, i+1) << "\t\t" << C[i] << endl;

	delete select;
	delete bSelect;

	return 0;
}
