package p121_besttimetobuyandsellstock;

public class Solution {
    public int maxProfit(int[] prices) {
        if(prices == null || prices.length <= 1){
            return 0;
        }

        int maxProfit = 0;
        int minPrice = prices[0];

        for(int i = 1; i < prices.length; ++i){
            int tempProfit = prices[i] - minPrice;

            if(maxProfit < tempProfit){
                maxProfit = tempProfit;
            }

            if(minPrice > prices[i]){
                minPrice = prices[i];
            }
        }

        return maxProfit;
    }
}
