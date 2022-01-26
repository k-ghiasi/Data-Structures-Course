/* Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad
 * 1 Ordibehesht 1399(Hijri shamsi)
 * 20 April 2020
 * Authors: Kamaledin Ghiasi-Shirazi
 *          Ali Moghadaszadeh
 *          Pooya Hosseinzadeh
 *          Fatemeh Tabadkani
*/

package ac.um.ds;


public class LinkedLinearList<T> implements LinearList<T>{
    private class Node<T> {
        public T data;
        public Node prev;
        public Node next;
    }

    public class LinkedListForwardIterator<T> implements LinearList.LinearListForwardIterator<T> {
        private Node<T> currNode;

        //constructors:
        public LinkedListForwardIterator() {
            this.currNode = null;
        }

        public LinkedListForwardIterator(Node<T> node) {
            this.currNode = node;
        }

        @Override
        public T next() {
            // Write your code here
        }

        @Override
        public boolean hasNext() {
            // Write your code here
        }
    }

    public class LinkedListBackwardIterator<T> implements LinearList.LinearListBackwardIterator<T> {
        Node<T> currNode;
        
        public LinkedListBackwardIterator() {
            this.currNode = null;
        }

        public LinkedListBackwardIterator(Node<T> node) {
            this.currNode = node;
        }
        
        @Override
        public T next() {
            // Write your code here
        }

        @Override
        public boolean hasNext() {
        }
    }

    public LinkedLinearList() {
        mSize = 0;
        headerNode = new Node<T>();
        headerNode.next = headerNode;
        headerNode.prev = headerNode;
    }

    public LinearListForwardIterator<T> forwardIterator() {
        return new LinkedListForwardIterator<T>(headerNode);
    }

    public LinearListBackwardIterator<T> backwardIterator() {
        return new LinkedListBackwardIterator<T>(headerNode);
    }

    @java.lang.Override
    public LinearListForwardIterator<T> insert(LinearListForwardIterator<T> it, T data) throws IndexOutOfBoundsException {
        // Write your code here
    }

    @java.lang.Override
    public LinearListBackwardIterator<T> insert(LinearListBackwardIterator<T> it, T data) throws IndexOutOfBoundsException {
		// Write your code here		
    }

    @java.lang.Override
    public LinearListForwardIterator<T> remove(LinearListForwardIterator<T> it) throws IndexOutOfBoundsException {
		// Write your code here			
    }

    @java.lang.Override
    public LinearListBackwardIterator<T> remove(LinearListBackwardIterator<T> it) throws IndexOutOfBoundsException {
		// Write your code here		
	}


    public int size() {
        return mSize;
    }

    @Override
    public String toString() {
        String str = "";
        Node currNode = headerNode;
        for (int i = 0; i < mSize; i++) {
            currNode = currNode.next;
            str += (" " + currNode.data);
        }
        return str;
    }

    private Node<T> headerNode;
    private int mSize;
}