// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad, 2020 (1399 Hijri Shamsi)
//
// Authors: 	Behzad Shomali
//				Kamaledin Ghiasi-Shirazi
	    

#pragma once

template <class T>
class ISort
{
public:
	virtual void Sort (T* data, int n)=0;
};
