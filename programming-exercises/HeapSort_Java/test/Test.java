import ac.um.ds.HeapSort.Heap;
import ac.um.ds.HeapSort.HeapSort;
import ac.um.ds.HeapSort.ISort;

public class Test {
    public static void main(String[] args) {

        int n = 15;

        TestType [] a = {
                new TestType(3), new TestType(6), new TestType(17), new TestType(15), new TestType(13),
                new TestType(15), new TestType(6), new TestType(12), new TestType(9), new TestType(1),
                new TestType(2), new TestType(7), new TestType(10), new TestType(19), new TestType(3)};

        Heap<TestType> h = new Heap<TestType>();
        ISort<TestType> sorterHeapSort = new HeapSort<TestType>();

        // random array
        // for (int i = 0; i < n; i++)
        //     a[i] = (int)(Math.random() * 20);

        for (int i = 0; i < n; i++)
            System.out.print(a[i] + " ");
        System.out.println();
        System.out.println();


        h.initialize(a, n);
        System.out.println("Initialize> ");
        for (int i = 0; i < n; i++)
            System.out.print(a[i] + " ");
        System.out.println();
        System.out.println("19 15 17 12 13 15 6 6 9 1 2 7 10 3 3   <<Answer");
        System.out.println();

//        System.out.println("Number of swaps> ");
//        cout<<I::counter<<endl<<"14   <<Answer"<<endl<<endl;

        sorterHeapSort.sort(a, n);
        System.out.println("Sort> ");
        for (int i = 0; i < n; i++)
            System.out.print(a[i] + " ");
        System.out.println();
        System.out.println("1 2 3 3 6 6 7 9 10 12 13 15 15 17 19   <<Answer");
        System.out.println();


        h.initialize(a, n);
        System.out.println("Initialize> ");
        for (int i = 0; i < n; i++)
            System.out.print(a[i] + " ");
        System.out.println();
        System.out.println("19 13 17 10 12 15 7 9 3 2 6 6 15 3 1   <<Answer");
        System.out.println();


        for (int i=0; i<5; i++)
            h.deleteMax();
        System.out.println("DeleteMax> ");
        for (int i = 0; i < n-5; i++)
            System.out.print(a[i] + " ");
        System.out.println();
        System.out.println("12 10 7 9 6 6 1 3 3 2   <<Answer");
        System.out.println();


        h.insert(new TestType(12));
        System.out.println("Insert> ");
        for (int i = 0; i < n-4; i++)
            System.out.print(a[i] + " ");
        System.out.println();
        System.out.println("12 12 7 9 10 6 1 3 3 2 6   <<Answer");
        System.out.println();


        sorterHeapSort.sort(a, n-5);
        System.out.println("Sort> ");
        for (int i = 0; i < n-5; i++)
            System.out.print(a[i] + " ");
        System.out.println();
        System.out.println("1 2 3 3 6 7 9 10 12 12   <<Answer");
        System.out.println();

    }
}

class TestType implements Comparable<TestType> {
    private int val;

    TestType(int n) {
        val = n;
    }

    public int getVal() {
        return val;
    }

    public void setVal(int val) {
        this.val = val;
    }

    @Override
    public int compareTo(TestType o) {
        return Integer.compare(val, o.val);
    }

    @Override
    public String toString() {
        return "" + val;
    }
}
