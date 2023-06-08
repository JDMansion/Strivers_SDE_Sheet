import java.util.* ;
import java.io.*; 
import java.util.ArrayList;

public class Solution{
    public static int maximumProfit(ArrayList<Integer> prices){
        int buy = prices.get(0), max_profit = 0;

        for(int i=1; i<prices.size(); i++) {

            if(buy > prices.get(i)) {
                buy = prices.get(i);
            }
            else if(prices.get(i) - buy > max_profit) {
                max_profit = prices.get(i) - buy;
            }
        }
        return max_profit;
    }
}
