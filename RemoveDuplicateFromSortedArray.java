import java.util.ArrayList;

public class Solution {
	public static int removeDuplicates(ArrayList<Integer> arr,int n) {
		if(n == 0) return 0;
		if(n ==1) return 1;

		int i=0; 

		for(int j=1; j<n; j++) {
			if(arr.get(j) != arr.get(i)) {
				i++;
				arr.set(i, arr.get(j));
			}
		}

		return i+1;
	}
}
