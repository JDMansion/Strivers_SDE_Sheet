import java.io.*;
import java.util.* ;

public class Solution {
    public static int lengthOfLongestConsecutiveSequence(int[] arr, int N) {
        if(arr.length == 0)
            return 0;
        
        Arrays.sort(arr);
        int max = 1;
        int count = 1;
        
        for(int i = 1;i < N; i++){
            if(arr[i] != arr[i - 1])
                if(arr[i] == arr[i - 1] + 1)      count += 1;
                    
                else{
                    max = Math.max(max,count);
                    count = 1;
                }
        }
        return Math.max(max, count);
    }
}
