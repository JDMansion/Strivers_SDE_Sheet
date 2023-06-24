import java.util.ArrayList;
public class Solution {
    static boolean searchMatrix(ArrayList<ArrayList<Integer>> mat, int target) {
            if(mat.size() == 0) return false;

            int row = mat.size();
            int col = mat.get(0).size();

            int low = 0;
            int high = (row*col) - 1;

            while(low <= high) {
                int mid = low + (high-low)/2;
                if(mat.get(mid/col).get(mid%col) == target) {
                    return true;
                }
                if(mat.get(mid/col).get(mid%col) < target) {
                    low = mid+1;
                }
                else {
                    high = mid-1;
                }
            }
            return false; 
    }
}
