#pragma once
#include <ostream>

template <class T>
class LinkedLinearList{
private:
		class Node{
		public:
			T	mData;
			Node*	mPrev;
			Node*	mNext;
		};

public:
	class Iterator{
	public:
		//constructors:
		Iterator ()
			:mCurNode (NULL){}

		Iterator (const Iterator &other)
			:mCurNode (other.mCurNode){}
		
		Iterator (Node* node)
			:mCurNode (node){}
		
		//overloading operators:
		virtual Iterator& operator++(){ // preincrement
			// Write your code here

		}

		virtual Iterator operator++(int dummy){ // postincrement
			// Write your code here

		}

		virtual Iterator& operator--(){ // predecrement
			mCurNode = mCurNode->mPrev;
			return *this;
		}

		virtual Iterator operator--(int dummy){ // postdecrement
			// Write your code here
		}

		bool operator!=(const Iterator& right)const {
			// Write your code here
		}

		bool operator==(const Iterator& right)const {
			// Write your code here
		}

		T* operator->() const {
			// Write your code here
		}

		T& operator*() const {
			// Write your code here
		}

		friend class LinkedLinearList;
	private:
		//const LinkedLinearList<T> *mLinkedList;
		Node *mCurNode;
	};

	LinkedLinearList(void){
		mSize = 0;
		mHeaderNode = new Node();
		mHeaderNode->mNext = mHeaderNode;
		mHeaderNode->mPrev = mHeaderNode;
	}

	virtual ~LinkedLinearList(void) {
		Node *n, *nn; 
		for (n = mHeaderNode->mNext; n != mHeaderNode;){
			nn = n->mNext;
			delete n;
			n = nn;
		}
		delete mHeaderNode;
	}

public:
	virtual Iterator begin() const {
		// Write your code here
	}

	virtual Iterator end() const {
		// Write your code here
	}

	virtual Iterator rbegin() const {
		// Write your code here

	}

	virtual Iterator rend() const {
		// Write your code here

	}

	// The returned iterator would point to the inserted element.
	virtual Iterator insert (Iterator it, const T& data) {
		// Write your code here
	}

	// The returned iterator would point to the element after the removed one.
	virtual Iterator remove (Iterator it){
		// Write your code here
	}

	virtual int size() const {
		return mSize;
	};

private:
	Node* mHeaderNode;
	int mSize;
};

template <class T>
std::ostream& operator<<(std::ostream& os, const LinkedLinearList<T>& ll){
	typename LinkedLinearList<T>::Iterator itr;

	for (itr = ll.begin(); itr != ll.end(); itr++)
		os << *itr << "\t";
	os << "\n";
	return os;
}
