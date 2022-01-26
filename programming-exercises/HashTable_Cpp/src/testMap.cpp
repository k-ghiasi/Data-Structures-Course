/* Copyright (C) Sayed Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad
 * 28 Ordibehesht 1399(Hijri shamsi)
 * 17 Jun 2020
 * Author: Sayed Kamaledin Ghiasi-Shirazi
*/

#include <map>
#include <iostream>
#include <cstring>
#include "../src/Map.h"
#include "../src/HashTable.h"

using namespace std;

int hashFunc(int index)
{
	int v = index * index * index;
	if (v < 0)
		v = -v;
	return v;
}


int main() {
	map<int, int> m;
	HashTable<int, int> h(hashFunc, .7, 7);
	int value;
	int N = 20000;


	for (int i = 0; i < N; i++)
	{
		value = rand() % N;
		m[value] = value;
		h.assign(value, value);
	}

	for (int i = 0; i < N; i++)
	{
		bool b1 = h.hasKey(i);
		bool b2 = m.find(i) != m.end();
		if (b1 != b2)
			return 0;

		if (b1 == false)
			continue;

		if (m[i] != h[i])
			return 0;
	}

	for (int i = 0; i < N; i++)
	{
		value = rand();
		if (value % 2 == 0)
		{
			m.erase(i);
			h.remove(i);
		}
	}

	for (int i = 0; i < N; i++)
	{
		bool b1 = h.hasKey(i);
		bool b2 = m.find(i) != m.end();
		if (b1 != b2)
			return 0;

		if (b1 == false)
			continue;

		if (m[i] != h[i])
			return 0;
	}
	return 100;
}
