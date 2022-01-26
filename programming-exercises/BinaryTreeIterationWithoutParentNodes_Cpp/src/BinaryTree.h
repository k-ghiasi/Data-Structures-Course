// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad, 2018 (1397 Hijri Shamsi)
//
// Author: Kamaledin Ghiasi-Shirazi

#pragma once

#include <stack>
#include <iostream>
#include <sstream>
#include "InternalBinaryTreeNode.h"

using namespace std;

//template <class T, class IBTN = InternalBinaryTreeNode<T>>
template <class T, class IBTN>
class BinaryTree{
public:

	class BinaryTreeNode{
	public:
		virtual ~BinaryTreeNode(void){}
		virtual T&	getData(){return mActualNode->getData();}
		virtual void	setData(const T& data){ return mActualNode->setData(data); }
		virtual bool	hasLeftChild() const{ return mActualNode->getLeftChild() != 0; }
		virtual BinaryTreeNode	getLeftChild()const { return BinaryTreeNode(mActualNode->getLeftChild()); }
		virtual bool	hasRightChild() const { return mActualNode->getRightChild() != 0; }
		virtual BinaryTreeNode	getRightChild() const { return BinaryTreeNode(mActualNode->getRightChild()); }

	private:
		template <class R, class S>
		friend class BinaryTree;
		BinaryTreeNode(IBTN* node){mActualNode = node;}

		IBTN	*mActualNode;
	};


public:
	class Iterator{
	public:
		Iterator (IBTN* currentNode): mCurrentNode(currentNode){}
		virtual T& operator*(){return mCurrentNode->mData;}
		virtual T* operator->(){return &mCurrentNode->mData;}
		virtual bool operator==(Iterator& itr){return mCurrentNode == itr.mCurrentNode;}
		virtual bool operator!=(Iterator& itr){return mCurrentNode != itr.mCurrentNode;}
		virtual void operator++() = 0;
		virtual void operator--() = 0;
	protected:
		IBTN*			mCurrentNode;
		stack<IBTN*>	mParents;

		friend class BinaryTree<T, InternalBinaryTreeNode<T>>;
	};

	class InOrderIterator: public Iterator{
	public:
		InOrderIterator(IBTN* currentNode) : Iterator(currentNode) {}
		virtual void operator++(){
			// Write your code here
		}

		virtual void operator--(){
			// Write your code here
		}
	};

	class PreOrderIterator : public Iterator{
	public:
		PreOrderIterator(IBTN* currentNode) : Iterator(currentNode){}
		virtual void operator++(){
			// Write your code here
		}


		virtual void operator--(){
			//Write your code here
		}
	};

	class PostOrderIterator: public Iterator{
	public:
		PostOrderIterator (IBTN* currentNode): Iterator (currentNode){}
		virtual void operator++(){
			// Write your code here
		}

		virtual void operator--(){
			// Write your code here
		}
	};

protected:

	// Write your code here (Add appropriate attributes for dummy roots)
	
	int		mNodeDisplayWidth;
	int		mSize;

public:
	BinaryTree(void){
		mNodeDisplayWidth = 2;
		mSize = 0;
		// Write your code here		
	}

	// caution: don't interpret virtual destrucor as an ordinary virtual function!
	virtual ~BinaryTree(void){
		DeleteSubtree (mRevInorderEnd);
	}

	int	size(){ return mSize; }
	void DeleteSubtree (IBTN* node){
		if (node->mLeftChild)
			DeleteSubtree (node->mLeftChild);
		if (node->mRightChild)
			DeleteSubtree (node->mRightChild);
		delete node;
	}

	bool	isEmpty(){
		return mInorderEnd->mLeftChild == 0;
	}

	virtual void	insertRootNode(T data){
		// Write your code here
	}

	virtual BinaryTreeNode	getRootNode(){return BinaryTreeNode(mInorderEnd->mLeftChild);}

	virtual BinaryTreeNode	getHeaderRootNode(){ 
		// Write your code here
	}

	// error if a left child already exists.
	virtual void 	insertLeftChild(const BinaryTreeNode& parentNode, T data){
		// Write your code here
	}

	// error if a right child already exists.
	virtual void insertRightChild(const BinaryTreeNode& parentNode, T data){
		// Write your code here
	}

	virtual void 	deleteLeftChild(const BinaryTreeNode& node) {
		IBTN *theParent = node.mActualNode;
		IBTN *theNode = theParent->getRightChild();
		deleteNode(theNode, theParent);
	}

	virtual void 	deleteRightChild(const BinaryTreeNode& node) {
		IBTN *theParent = node.mActualNode;
		IBTN *theNode = theParent->getLeftChild();
		deleteNode(theNode, theParent);
	}
	
	virtual InOrderIterator inOrderBegin(){
		// Write your code here
	}

	virtual InOrderIterator inOrderEnd(){
		// Write your code here
	}

	virtual InOrderIterator inOrderReverseBegin(){
		// Write your code here
	}

	virtual InOrderIterator inOrderReverseEnd(){
		// Write your code here
	}

	virtual PreOrderIterator preOrderBegin(){
		// Write your code here
	}

	virtual PreOrderIterator preOrderEnd(){
		// Write your code here
	}

	virtual PreOrderIterator preOrderReverseBegin(){
		// Write your code here
	}

	virtual PreOrderIterator preOrderReverseEnd(){
		// Write your code here
	}

	virtual PostOrderIterator postOrderBegin(){
		// Write your code here
	}

	virtual PostOrderIterator postOrderEnd(){
		// Write your code here
	}

	virtual PostOrderIterator postOrderReverseBegin(){
		// Write your code here
	}

	virtual PostOrderIterator postOrderReverseEnd(){
		// Write your code here
	}
	
	void setNodeDisplayWidth(int width){
		mNodeDisplayWidth = width;
	}

	// This function is solely written to work on small binary trees.
	// The code has many other known limitations.
	void draw(std::ostream& out){
		if (mSize == 0)
			return;

		int maxDepth = 9;
		int depth = depthCalc(getRootNode().mActualNode, 1);
		depth = depth * 2 - 1;


		if (depth > maxDepth){
			out << "Can't draw, the height of the tree is greater than " << (maxDepth + 1) / 2 << "\n";
			return;
		}

		char **map = new char *[depth];
		for (int i = 0; i < depth; i++){
			map[i] = new char[80];
			for (int j = 0; j < 80; j++)
				map[i][j] = ' ';
		}

		recursiveDraw(getRootNode().mActualNode, map, 40, 0);

		for (int i = 0; i < depth; i++)
		for (int j = 0; j < 80; j++)
			out << map[i][j];

		for (int i = 0; i < depth; i++)
			delete[] map[i];
		delete[] map;
	}

	string toString (){
		std::ostringstream stream;
		this->draw(stream);
		return stream.str();
	}

protected:
	// Only leaf nodes and nodes with degree 1 can be deleted. 
	// If a degree-1 node is deleted, it is replaced by its subtree.
	virtual void 	deleteNode(IBTN* theNode, IBTN* theParent) {
		// Write your code here
	}


	int depthCalc(IBTN* root, int depth){
		int res = depth;
		if (root->mRightChild){
			int rightDepth = depthCalc(root->mRightChild, depth + 1);
			res = (res > rightDepth) ? res : rightDepth;
		}
		if (root->mLeftChild){
			int leftDepth = depthCalc(root->mLeftChild, depth + 1);
			res = (res > leftDepth) ? res : leftDepth;
		}
		return res;
	}

	void recursiveDraw(IBTN* root, char** lines, int x, int y){
		int des = 1;
		for (int i = 0; i < y / 2 + 2; i++)
			des *= 2;
		des = 80 / des;
		//root:
		for (int i = 0; i < mNodeDisplayWidth; i++)
			lines[y][x + i - mNodeDisplayWidth / 2] = (root->mData)[i];
		//left child:
		if (root->mLeftChild){
			for (int i = 0; i < des; i++)
				lines[y + 1][x - i] = '-';
			lines[y + 1][x] = '|';
			recursiveDraw(root->mLeftChild, lines, x - des, y + 2);
		}
		//right child:
		if (root->mRightChild){
			for (int i = 0; i < des; i++)
				lines[y + 1][x + i] = '-';
			lines[y + 1][x] = '|';
			recursiveDraw(root->mRightChild, lines, x + des, y + 2);
		}
	}

protected:
	virtual IBTN*	getActualNode(const BinaryTreeNode& node){ return node.mActualNode; }
};

