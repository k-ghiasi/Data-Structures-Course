package ac.um.ds;

// Please note that this file will be replaced by its original version 
// during final test on Sepehr. Therefore, be careful not to add ant methods or 
// attributes to the InternalBinaryTreeNode class.
// Specifically, note that no mParent attribute is present.
public class InternalBinaryTreeNode<T>
{
    protected T mData;
    protected InternalBinaryTreeNode<T> mLeftChild;
    protected InternalBinaryTreeNode<T> mRightChild;
    protected int mPosition;

    public void InternalBinaryTreeNode()
    {
        mLeftChild = null;
        mRightChild = null;
    }

    public T getData()
    {
        return mData;
    }

    public void setData(T data){ mData = data; }

    public InternalBinaryTreeNode<T> getLeftChild()
    {
        return mLeftChild;
    }

    public InternalBinaryTreeNode<T> getRightChild()
    {
        return mRightChild;
    }

}
