import java.util.ArrayList;
import java.util.List;
public class Solution {

    private static void func(int ind, String str, List<String> path, List<List<String>> res) {
        if(ind == str.length()) {
            res.add(new ArrayList<>(path));
            return;
        }

        for(int i = ind; i<str.length(); i++) {
            if(isPalindrome(str, ind, i)) {
                path.add(str.substring(ind, i+1));
                func(i+1, str, path, res);
                path.remove(path.size()-1);
            }
        } 
    }


    static boolean isPalindrome(String str, int start, int end) {
        while(start <= end) {
            if(str.charAt(start) != str.charAt(end)) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    public static List<List<String>> partition(String str) {
        List<List<String>> res = new ArrayList<>();
        List<String> path = new ArrayList<>();
        func(0, str, path, res);
        return res;
    }
}
