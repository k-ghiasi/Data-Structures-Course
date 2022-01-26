/* Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad
 * 24 Aban 1396(Hijri shamsi)
 * 15 November 2017
 * Authors: Pooya Hosseinzadeh, Fatemeh Tabadkani, Kamaledin Ghiasi-Shirazi
*/



import java.util.Iterator;
import ac.um.ds.LinearList;
import ac.um.ds.LinkedLinearList;

public class TestForStudents {
    public static void testIteration() throws Exception {
        LinkedLinearList<Integer> lll = new LinkedLinearList<Integer>();
        LinearList.LinearListForwardIterator<Integer> itrFwd;
        LinearList.LinearListBackwardIterator<Integer> itrBckwd;

        LinearList.LinearListForwardIterator<Integer> it = lll.forwardIterator();
        for (int i = 0; i < 4; i++) {
            it = lll.insert(it, (Integer) i);
			it.next(); // Go after the inserted element
        }

        System.out.print("List should be: 0	1	2	3\n");
        System.out.print(lll);
        System.out.print("\n");

        System.out.print("Forward Iteration should be:  0	1	2	3\n");
        itrFwd = lll.forwardIterator();
        while (itrFwd.hasNext())
		{
			System.out.print(itrFwd.next());
			System.out.print("\t");
		}
        System.out.println("");

        System.out.print("Backward Iteration should be: 3	2	1	0\n");
        itrBckwd = lll.backwardIterator();
		while (itrBckwd.hasNext())
		{
			System.out.print(itrBckwd.next());
			System.out.print("\t");
		}
        System.out.println("");
    }


    public static void testInsertRemove() throws Exception {
        LinkedLinearList<Integer> lll = new LinkedLinearList<Integer>();

        int N = 10;
        LinearList.LinearListForwardIterator<Integer> itr = lll.forwardIterator();
        for (int i = 0; i < N; ++i) {
            itr = lll.insert(itr, (Integer) i);
			itr.next();
        }
        System.out.println(lll);

        LinearList.LinearListBackwardIterator<Integer> it = lll.backwardIterator();
        it.next();
        for (int i = 0; i < 5; i++) {
            it.next();
            it = lll.remove(it);
            System.out.println(lll);
        }

        System.out.print("List should be: 1 3 5 7 9\n");
        System.out.println(lll);


    }

    public static void main(String[] args) throws Exception {
        testInsertRemove();
        testIteration();
    }
}
