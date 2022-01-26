// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad, 2020 (1399 Hijri Shamsi)
//
// Authors: Kamaledin Ghiasi-Shirazi
//		  	Ali Moghaddaszadeh

package ac.um.ds.HeapSort;

public interface ISort< T extends Comparable<T> >{
    public void sort(T[] data, int n);
}
