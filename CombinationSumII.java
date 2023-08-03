import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
public class Solution 
{

    private static void findCombinations(int ind, ArrayList<Integer> arr, int target, ArrayList<ArrayList<Integer>> ans, List<Integer> ds) {
        if(target == 0) {
            ans.add(new ArrayList<>(ds));
            return;
        }

        for(int i=ind; i<arr.size(); i++) {
            if(i > ind && arr.get(i) == arr.get(i-1)) continue;
            if(arr.get(i) > target) break;

            ds.add(arr.get(i));
            findCombinations(i+1, arr, target-arr.get(i), ans, ds);
            ds.remove(ds.size()-1);
        }
    }

    public static ArrayList<ArrayList<Integer>> combinationSum2(ArrayList<Integer> arr, int n, int target)
    {
        ArrayList<ArrayList<Integer>> ans = new ArrayList<>();
        Collections.sort(arr);
        findCombinations(0, arr, target, ans, new ArrayList<>());
        return ans;
    }
}
