package ac.um.ds;

import java.util.Iterator;
import java.util.Stack;

public class BinaryTreeBackwardPostorderIterator<T, IBTN extends InternalBinaryTreeNode<T> > implements Iterator<T> {
	private IBTN mCurrentNode;
	private Stack<IBTN> mParentsStack;
	private BinaryTree<T, IBTN> mBinaryTree;

	//constructors:
	public BinaryTreeBackwardPostorderIterator()
	{
	}

	// The binaryTree parameter is used to initialize the mCurrentNode to
	// the appropriate dummy root. In addition, it is used to initialize mParentsStack	
	public BinaryTreeBackwardPostorderIterator(BinaryTree<T, IBTN> binaryTree)
	{
		// Write your code here
	}

	//overloading operators:
	@Override
	public T next() {
		// Write your code here
	}

	@Override
	public boolean hasNext() {
		// Write your code here
	}
}
