import java.util.* ;
import java.io.*; 
public class Solution 
{
	public static int uniqueSubstrings(String input) 
    {
		HashMap<Character, Integer> map = new HashMap<>();

		int left = 0, right = 0;
		int n = input.length();
		int len = 0;
		while(right < n) {
			if(map.containsKey(input.charAt(right))) {
				left = Math.max(map.get(input.charAt(right))+1, left);
			}

			map.put(input.charAt(right), right);
			len = Math.max(len, right - left + 1);
			right ++;
		}
		return len;
	}
}
