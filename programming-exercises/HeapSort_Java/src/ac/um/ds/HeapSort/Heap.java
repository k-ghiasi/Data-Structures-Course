// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad, 2020 (1399 Hijri Shamsi)
//
// Authors: Kamaledin Ghiasi-Shirazi
//		  	Ali Moghaddaszadeh

package ac.um.ds.HeapSort;

public class Heap< T extends Comparable< T > > implements PriorityQueue< T > {
    private int mSize;
    private T[] mData;

    public int getSize() {
        return mSize;
    }

    public void initialize(T[] data, int n) {
        // Write your code here
    }

    public T findMax() {
        return mData[0];
    }

    public void insert(T data) {
        // Write your code here
    }

    public T deleteMax() {
        // Write your code here
    }
}
