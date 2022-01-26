package ac.um.ds;

import java.util.Iterator;

public class BinaryTree<T, IBTN extends InternalBinaryTreeNode<T> >
{
    private int mSize;
	
	//Write your code here (Add appropriate members to the BinaryTree class.
	
	
    public BinaryTree () {
		//Write your code here 
    }

    protected IBTN createInternalBinaryTreeNodeInstance()
    {
        return (IBTN) new InternalBinaryTreeNode<T>();
    }
    protected int size() { return mSize; }

    boolean	isEmpty()
    {
        return mInorderEnd.mLeftChild == null;
    }

    public void insertRootNode(T data) {
		//Write your code here 		
    }

    public BinaryTreeNode<T, IBTN> getRootNode()
    {
        //Write your code here 
    }

    public void insertLeftChild(BinaryTreeNode<T, IBTN> parentNode, T data) {
        //Write your code here
    }

    public void insertRightChild(BinaryTreeNode<T, IBTN> parentNode, T data) {
        //Write your code here
    }

    public void deleteLeftChild(BinaryTreeNode<T, IBTN> parent)  // Only leaf nodes and nodes with degree 1 can be deleted. If a degree 1 node is deleted, it is replaced by its subtree.
    {
        IBTN parentNode = parent.mActualNode;
        IBTN theNode = (IBTN) parent.getLeftChild().mActualNode;
        deleteNode(parentNode, theNode);
    }

    public void deleteRightChild(BinaryTreeNode<T, IBTN> parent)  // Only leaf nodes and nodes with degree 1 can be deleted. If a degree 1 node is deleted, it is replaced by its subtree.
    {
        IBTN parentNode = parent.mActualNode;
        IBTN theNode = (IBTN) parent.getRightChild().mActualNode;
        deleteNode(parentNode, theNode);
    }

    protected void deleteNode(IBTN parentNode, IBTN theNode)  // Only leaf nodes and nodes with degree 1 can be deleted. If a degree 1 node is deleted, it is replaced by its subtree.
    {
        // Write your code here
    }

    public Iterator<T> forwardInorderIterator() {
        // Write your code here
    }

    public Iterator<T> backwardInorderIterator() {
		// Write your code here
	}

    public Iterator<T> forwardPreorderIterator() {
        // Write your code here
    }

    public Iterator<T> backwardPreorderIterator() {
		// Write your code here
	}

    public Iterator<T> forwardPostorderIterator() {
        // Write your code here
    }

    public Iterator<T> backwardPostorderIterator() {
		// Write your code here
	}
	
    protected IBTN getActualNode(BinaryTreeNode<T, IBTN> node) 
	{
		return node.mActualNode;
	}

    public void draw()
    {
        int maxDepth = 11;
        int depth = depthCalc(getRootNode().mActualNode, 1);
        depth = depth * 2 - 1;

        if (depth > maxDepth){
            System.out.println("Can't draw, the height of the tree is greater than " + (maxDepth + 1) / 2);
            return;
        }

        String [][] map = new String[depth][];
        for (int i = 0; i < depth; i++){
            map[i] = new String[160];
            for (int j = 0; j < 160; j++)
                map[i][j] = " ";
        }

        recursiveDraw(getRootNode().mActualNode, map, 80, 0);

        for (int i = 0; i < depth; i++) {
            for (int j = 0; j < 160; j++) {
                System.out.print(map[i][j]);

            }
            System.out.println();
        }


    }

    public int depthCalc(IBTN root, int depth)
    {
        int res = depth;
        if (root.getRightChild() != null){
            int rightDepth = depthCalc((IBTN)root.getRightChild(), depth + 1);
            res = (res > rightDepth) ? res : rightDepth;
        }
        if(root.getLeftChild() != null){
            int leftDepth = depthCalc((IBTN)root.getLeftChild(), depth + 1);
            res = (res > leftDepth) ? res : leftDepth;
        }
        return res;
    }

    public void recursiveDraw(IBTN root, String lines[][], int x, int y)
    {
        int des = 1;
        for (int i = 0; i < y / 2 + 2; i++)
            des *= 2;
        des = 160 / des;
        //root:

        lines[y][x] =  root.getData().toString();
        //left child:
        if (root.getLeftChild() != null){
            for (int i = 0; i < des; i++)
                lines[y + 1][x - i] = "-";
            lines[y + 1][x] = "|";
            recursiveDraw((IBTN)root.getLeftChild(), lines, x - des, y + 2);
        }
        //right child:
        if (root.getRightChild() != null){
            for (int i = 0; i < des; i++)
                lines[y + 1][x + i] = "-";
            lines[y + 1][x] = "|";
            recursiveDraw((IBTN)root.getRightChild(), lines, x + des, y + 2);
        }

    }

}

