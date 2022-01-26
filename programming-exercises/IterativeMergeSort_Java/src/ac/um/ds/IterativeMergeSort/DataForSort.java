package ac.um.ds.IterativeMergeSort;

public class DataForSort implements Comparable<DataForSort> {
	private int value;

	public DataForSort(int n) {
		value = n;
	}

	public int getVal() {
		return value;
	}

	public void setValue(int value) {
		this.value = value;
	}

	@Override
	public int compareTo(DataForSort data) {
		if (value < data.getVal())
			return -1;
		else if (value > data.getVal())
			return 1;
		else
			return 0;
	}
} 
