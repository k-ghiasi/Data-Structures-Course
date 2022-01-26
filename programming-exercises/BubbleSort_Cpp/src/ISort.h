// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad, 2013 (1392 Hijri Shamsi)
//
// Author: Kamaledin Ghiasi-Shirazi

#pragma once

template <class T>
class ISort
{
public:
	virtual void Sort (T* data, int n)=0;
};

