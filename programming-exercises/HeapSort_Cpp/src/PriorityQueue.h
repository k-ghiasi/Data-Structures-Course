// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad, 2020 (1399 Hijri Shamsi)
//
// Authors: Kamaledin Ghiasi-Shirazi
//		  	Ali Moghaddaszadeh

#pragma once

template <class T>
class PriorityQueue{
public: 
	virtual T findMax() = 0;
	virtual void insert(const T& data) = 0;
	virtual T deleteMax() = 0;
	virtual void initialize(T* data, int n) = 0;
};
