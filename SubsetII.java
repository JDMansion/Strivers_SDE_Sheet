import java.util.* ;
import java.io.*; 
public class Solution {

    public static void findSubset(int ind, int[] arr, ArrayList<Integer> ds, ArrayList<ArrayList<Integer>> ansList) {
        ansList.add(new ArrayList<>(ds));

        for(int i=ind; i<arr.length; i++) {
            if(i!=ind && arr[i] == arr[i-1]) continue;
            ds.add(arr[i]);
            findSubset(i+1, arr, ds, ansList);
            ds.remove(ds.size() - 1);
        }
    }
    public static ArrayList<ArrayList<Integer>> uniqueSubsets(int n, int arr[]) {
        Arrays.sort(arr);
        ArrayList<ArrayList<Integer>> ansList = new ArrayList<>();
        findSubset(0, arr, new ArrayList<>(), ansList);
        return ansList;
    }

}
