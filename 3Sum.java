import java.util.* ;
import java.io.*; 
public class Solution {

	public static ArrayList<ArrayList<Integer>> findTriplets(int[] arr, int n, int K)  {

	    Arrays.sort(arr);

		ArrayList<ArrayList<Integer>> res = new ArrayList<>();

		for(int i=0; i<n-2; i++) {
			if(i == 0 || (i>0 && arr[i] != arr[i-1])) {
				int lo = i+1, hi = n-1, sum = K-arr[i];
				while(lo < hi) {
					if(arr[lo] + arr[hi] == sum) {
						ArrayList<Integer> temp = new ArrayList<>();
						temp.add(arr[i]);
						temp.add(arr[lo]);
						temp.add(arr[hi]);
						res.add(temp);

						while(lo < hi && arr[lo] == arr[lo+1]) lo++;
						while(lo < hi && arr[hi] == arr[hi-1]) hi--;

						lo++;
						hi--;
					}
					else if(arr[lo] + arr[hi] < sum)  lo++;
					else hi--;
				}
			}
		}
		return res;

	}
}
