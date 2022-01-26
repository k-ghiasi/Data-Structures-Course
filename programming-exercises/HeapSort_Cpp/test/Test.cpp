/* Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad, 2020 (1399 Hijri Shamsi)
* 20 Ordibehesht 1399(Hijri shamsi)
* 9 May 2020
* Author: Ali Moghaddaszadeh
*/

#include "../src/Heap.h"
#include "../src/HeapSort.h"
#include "I.cpp"
#include <iostream>
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL));

	int n = 15;

    I a[15] = {I(3), I(6), I(17), I(15), I(13), I(15), I(6), I(12), I(9), I(1), I(2), I(7), I(10), I(19), I(3)};

    Heap<I> h;
	ISort<I> *sorterHeapSort = new HeapSort<I>();

	// random array
	// for (int i = 0; i < n; i++)
	// 	a[i] = rand() % 20;


	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout<<endl<<endl;


	h.initialize(a, n);
	cout<<"Initialize> "<<endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout<<endl;
	cout<<"19 15 17 12 13 15 6 6 9 1 2 7 10 3 3   <<Answer"<<endl;

	cout<<"Number of swaps> "<<endl;
	cout<<I::counter<<endl<<"14   <<Answer"<<endl<<endl;

	sorterHeapSort->sort(a, n);
	cout<<"Sort> "<<endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout<<endl;
	cout<<"1 2 3 3 6 6 7 9 10 12 13 15 15 17 19   <<Answer"<<endl<<endl;


	h.initialize(a, n);
	cout<<"Initialize> "<<endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout<<endl;
	cout<<"19 13 17 10 12 15 7 9 3 2 6 6 15 3 1   <<Answer"<<endl<<endl;


	for (int i=0; i<5; i++)
		h.deleteMax();
	cout<<"DeleteMax> "<<endl;
	for (int i = 0; i < n-5; i++)
		cout << a[i] << " ";
	cout<<endl;
	cout<<"12 10 7 9 6 6 1 3 3 2   <<Answer"<<endl<<endl;


	h.insert(I(12));
	cout<<"Insert> "<<endl;
	for (int i = 0; i < n-4; i++)
		cout << a[i] << " ";
	cout<<endl;
	cout<<"12 12 7 9 10 6 1 3 3 2 6   <<Answer"<<endl<<endl;


	sorterHeapSort->sort(a, n-5);
	cout<<"Sort> "<<endl;
	for (int i = 0; i < n-5; i++)
		cout << a[i] << " ";
	cout<<endl;
	cout<<"1 2 3 3 6 7 9 10 12 12   <<Answer"<<endl<<endl;
	

	int d;
	cin >> d;
}


