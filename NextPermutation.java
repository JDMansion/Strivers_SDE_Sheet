import java.util.* ;
import java.io.*; 
import java.util.ArrayList;
import java.util.Collections;

public class Solution 
{
	public static ArrayList<Integer> nextPermutation(ArrayList<Integer> permutation) 
	{
		if(permutation == null || permutation.size() <= 1) {
			return permutation;
		}

		int i = permutation.size()-2;
		while(i >= 0 && permutation.get(i) >= permutation.get(i+1)) {
			i--;
		}

		if(i >= 0) {
			int j = permutation.size()-1;
			while(permutation.get(j) <= permutation.get(i)) {
				j--;
			}
			swap(permutation, i, j);
		}
		reverse(permutation, i+1, permutation.size()-1);
		return permutation;
	}

	public static void swap(ArrayList<Integer> nums, int i, int j) {
		int temp = nums.get(i);
		nums.set(i, nums.get(j));
		nums.set(j, temp);
	}

	public static void reverse(ArrayList<Integer> nums, int i, int j) {
		while(i < j) {
			swap(nums, i++, j--);
		}
	}
}
