// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad, 2020 (1399 Hijri Shamsi)
//
// Authors: Kamaledin Ghiasi-Shirazi
//		  	Ali Moghaddaszadeh

package ac.um.ds.HeapSort;

public interface PriorityQueue< T extends Comparable<T> >{
    public T findMax();
    public void insert(T data);
    public T deleteMax();
    public void initialize(T[] data, int n);
}
