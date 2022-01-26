import ac.um.ds.BinaryTree;
import ac.um.ds.BinaryTreeNode;
import ac.um.ds.InternalBinaryTreeNode;

import java.lang.String;
import java.util.Iterator;

public class TestBinaryTree {

    public static void main(String[] args)
    {
        BinaryTree<Integer, InternalBinaryTreeNode<Integer>>	bt = new BinaryTree<>();
        bt.insertRootNode(1);

        BinaryTreeNode btna = bt.getRootNode();
        bt.insertLeftChild(btna, 2);
        bt.insertRightChild(btna, 3);

        BinaryTreeNode	btnb = btna.getLeftChild();
        BinaryTreeNode	 btnc = btna.getRightChild();
        bt.insertLeftChild(btnb, 4);
        bt.insertRightChild(btnb, 5);
        bt.insertLeftChild(btnc, 6);

        BinaryTreeNode	btnd = btnb.getLeftChild();
        BinaryTreeNode	btne = btnb.getRightChild();
        BinaryTreeNode	 btnf = btnc.getLeftChild();
        bt.insertLeftChild(btnd, 7);
        bt.insertLeftChild(btne, 8);
        bt.insertRightChild(btnf, 9);

        BinaryTreeNode	btng = btnd.getLeftChild();
        BinaryTreeNode	btnh = btne.getLeftChild();
        BinaryTreeNode	btni = btnf.getRightChild();

        bt.insertRightChild(btng, 10);
        bt.insertRightChild(btnh, 11);
        bt.insertRightChild(btni, 12);

        BinaryTreeNode	btnj = btng.getRightChild();
        BinaryTreeNode	btnk = btnh.getRightChild();
        BinaryTreeNode	btnl = btni.getRightChild();

        bt.insertLeftChild(btnj, 13);
        bt.insertLeftChild(btnk, 14);
        bt.insertRightChild(btnk, 15);
        bt.insertLeftChild(btnl, 16);

        Iterator<Integer> itr;


        System.out.println("Expected Forward Inorder Iteration: 7, 13, 10, 4, 2, 8, 14, 11, 15, 5, 1, 6, 9, 16, 12, 3,");
        System.out.print("Actual Forward Inorder Iteration: ");
        itr = bt.forwardInorderIterator();
        while (itr.hasNext()) {
            System.out.print(itr.next());
            System.out.print(", ");
        }
        System.out.println();

        System.out.println("Expected Backward Inorder Iteration: 3, 12, 16, 9, 6, 1, 5, 15, 11, 14, 8, 2, 4, 10, 13, 7,");
        System.out.print("Actual Backward Inorder Iteration: ");
        itr = bt.backwardInorderIterator();
        while (itr.hasNext()) {
            System.out.print(itr.next());
            System.out.print(", ");
        }
        System.out.println();

        System.out.println("Expected Forward Preorder Iteration: 1, 2, 4, 7, 10, 13, 5, 8, 11, 14, 15, 3, 6, 9, 12, 16,");
        System.out.print("Actual Forward Preorder Iteration: ");
        itr = bt.forwardPreorderIterator();
        while (itr.hasNext()) {
            System.out.print(itr.next());
            System.out.print(", ");
        }
        System.out.println();

        System.out.println("Expected Backward Preorder Iteration:  16, 12, 9, 6, 3, 15, 14, 11, 8, 5, 13, 10, 7, 4, 2, 1,");
        System.out.print("Actual Backward Preorder Iteration: ");
        itr = bt.backwardPreorderIterator();
        while (itr.hasNext()) {
            System.out.print(itr.next());
            System.out.print(", ");
        }
        System.out.println();

        System.out.println("Expected Forward Postorder Iteration: 13, 10, 7, 4, 14, 15, 11, 8, 5, 2, 16, 12, 9, 6, 3, 1,");
        System.out.print("Actual Forward Postorder Iteration: ");
        itr = bt.forwardPostorderIterator();
        while (itr.hasNext()) {
            System.out.print(itr.next());
            System.out.print(", ");
        }
        System.out.println();

        System.out.println("Expected Backward Postorder Iteration: 1, 3, 6, 9, 12, 16, 2, 5, 8, 11, 15, 14, 4, 7, 10, 13,");
        System.out.print("Actual Backward Postorder Iteration: ");
        itr = bt.backwardPostorderIterator();
        while (itr.hasNext()) {
            System.out.print(itr.next());
            System.out.print(", ");
        }
        System.out.println();

        System.out.println("Your answer:");
        bt.draw();

        bt.deleteLeftChild(btnc);
        bt.deleteRightChild(btni);
        bt.deleteRightChild(btnb);

        System.out.println("Your answer:");
        bt.draw();
    }
}
