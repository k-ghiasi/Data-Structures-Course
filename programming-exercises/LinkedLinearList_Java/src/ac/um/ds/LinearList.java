/* Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad
 * 1 Ordibehesht 1399(Hijri shamsi)
 * 20 April 2020
 * Authors: Kamaledin Ghiasi-Shirazi
 *          Ali Moghadaszadeh
 *          Pooya Hosseinzadeh
 *          Fatemeh Tabadkani
 */

package ac.um.ds;
import java.util.Iterator;

public interface LinearList<T> {

    interface LinearListForwardIterator<T> extends Iterator<T> {
    }

    interface LinearListBackwardIterator<T> extends Iterator<T> {
    }

    LinearListForwardIterator<T> forwardIterator();

    LinearListBackwardIterator<T> backwardIterator();

    LinearListForwardIterator<T> insert(LinearListForwardIterator<T> it, T data) throws IndexOutOfBoundsException;

    LinearListBackwardIterator<T> insert(LinearListBackwardIterator<T> it, T data) throws IndexOutOfBoundsException;

    LinearListForwardIterator remove(LinearListForwardIterator<T> it) throws IndexOutOfBoundsException;

    LinearListBackwardIterator<T>remove(LinearListBackwardIterator<T> it) throws IndexOutOfBoundsException;

    int size();

    String toString();
}
