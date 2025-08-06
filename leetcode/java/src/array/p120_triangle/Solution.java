package p120_triangle;

import java.util.List;

public class Solution {
    public int minimumTotal(List<List<Integer>> triangle) {
        int n = triangle.size();

        int[] dp = new int[n];

        for(int j = 0; j < n; ++j){
            dp[j] = triangle.get(n-1).get(j);
        }

        for(int i = n-2; i >= 0; --i){
            for(int j = 0; j <= i; ++j){
                int minValue = Math.min(dp[j], dp[j+1]);
                dp[j] = triangle.get(i).get(j) + minValue;
            }
        }

        return dp[0];
    }
}
