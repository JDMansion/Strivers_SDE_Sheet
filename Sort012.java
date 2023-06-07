import java.util.* ;
import java.io.*; 
public class Solution 
{
    public static void sort012(int[] arr)
    {
        int lo = 0;
        int hi = arr.length-1;
        int mid = 0, temp = 0;

        while(mid <= hi) {
            switch(arr[mid]) {
                case 0: {
                    temp = arr[mid];
                    arr[mid] = arr[lo];
                    arr[lo] = temp;
                    lo++;
                    mid++;
                    break;
                }
                case 1: {
                    mid++;
                    break;
                }
                case 2: {
                    temp = arr[mid];
                    arr[mid] = arr[hi];
                    arr[hi] = temp;
                    hi--;
                    break;
                }
            }
        }
    }
}
