// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad, 2020 (1399 Hijri Shamsi)
//
// Authors: Kamaledin Ghiasi-Shirazi
//		  	Ali Moghaddaszadeh

#pragma once

template <class K, class V>
class Map
{
public:
	Map() {};
	virtual ~Map() {};

	virtual void assign(K key, V value) = 0;
	virtual void remove(K key) = 0;
	//V& get(K key);
	virtual V& operator[] (K key) = 0;
	virtual int capacity() = 0;
};

