package ac.um.ds;

// Please note that this file will be replaced by its original version 
// during final test on Sepehr. Therefore, be careful not to add any methods or 
// attributes to the BinaryTreeNode class.

public class BinaryTreeNode<T, IBTN extends InternalBinaryTreeNode<T> >
{
    protected IBTN mActualNode;

    protected BinaryTreeNode(IBTN node) { mActualNode = node; }

    public T getData() { return mActualNode.getData(); }

    public boolean hasLeftChild()
    {
        return mActualNode.getLeftChild() != null;
    }

    public BinaryTreeNode getLeftChild()
    {
        return new BinaryTreeNode(mActualNode.getLeftChild());
    }

    public boolean hasRightChild() { 
		return mActualNode.getRightChild() != null; 
	}

    public BinaryTreeNode getRightChild()
    {
        return new BinaryTreeNode(mActualNode.getRightChild());
    }
}
