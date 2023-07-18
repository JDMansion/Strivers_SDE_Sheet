import java.util.* ;
import java.io.*; 
public class Solution {

    void func(int ind, int sum, ArrayList<Integer> arr, int n, ArrayList<Integer> sumSubset) {
        if(ind == n) {
            sumSubset.add(sum);
            return;
        }

        //pick the element
        func(ind+1, sum+arr.get(ind), arr, n, sumSubset);

        //Do-not pick the element
        func(ind+1, sum, arr, n, sumSubset);
    }
    public static ArrayList<Integer> subsetSum(int num[]) {
        
        ArrayList<Integer> sumSubset = new ArrayList<>();
        func(0, 0, num, num.length, sumSubset);
        Collections.sort(sumSubset);
        return sumSubset;
    }

}
