import ac.um.ds.IterativeMergeSort.MergeSort;
import ac.um.ds.IterativeMergeSort.ISort;
import ac.um.ds.IterativeMergeSort.DataForSort;

public class Test {
    public static void main(String[] args) {
        DataForSort[] tests = {new DataForSort(25), new DataForSort(42), new DataForSort(41), new DataForSort(58)
                            , new DataForSort(36), new DataForSort(25), new DataForSort(2), new DataForSort(1)
                            , new DataForSort(25), new DataForSort(41), new DataForSort(84), new DataForSort(65)
                            , new DataForSort(73), new DataForSort(15), new DataForSort(23), new DataForSort(25)
                            , new DataForSort(121), new DataForSort(487), new DataForSort(1), new DataForSort(2)};
        int testArraySize = 20;

        System.out.println("Initialed Array:");
        for (int i = 0; i < testArraySize; i++)
        System.out.print(tests[i].getVal() + ", ");

        ISort<DataForSort> iSort = new MergeSort<>();
        iSort.sort(tests, testArraySize);

        System.out.println();
        System.out.println("Sorted Array:");
        for (int i = 0; i < testArraySize; i++)
        System.out.print(tests[i].getVal() + ", ");
    }
}
