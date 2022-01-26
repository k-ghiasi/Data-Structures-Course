package ac.um.ds;

import java.util.Iterator;
import java.util.Stack;

public class BinaryTreeBackwardInorderIterator<T, IBTN extends InternalBinaryTreeNode<T> > implements Iterator<T> {
	private IBTN mCurrentNode;
	private Stack<IBTN> mParentsStack;
	private BinaryTree<T, IBTN> mBinaryTree;

	//constructors:
	public BinaryTreeBackwardInorderIterator()
	{
	}

	// The binaryTree parameter is used to initialize the mCurrentNode to
	// the appropriate dummy root. In addition, it is used to initialize mParentsStack	
	public BinaryTreeBackwardInorderIterator(BinaryTree<T, IBTN> binaryTree)
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
