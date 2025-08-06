package p228_summaryranges;

import java.util.ArrayList;
import java.util.List;

public class Solution {
    public List<String> summaryRanges(int[] nums) {
        if(nums == null || nums.length == 0){
            return new ArrayList<>();
        }

        List<String> summary = new ArrayList<>();
        int n = nums.length;
        int ptrA = 0;
        int ptrB = 0;

        while(ptrA < n && ptrB < n){
            while(ptrB + 1 < n && nums[ptrB] + 1 == nums[ptrB + 1]){
                ptrB++;
            }

            if(ptrA == ptrB){
                summary.add("" + nums[ptrA]);
            } else {
                summary.add(nums[ptrA] + "->" + nums[ptrB]);
            }

            ptrA = ++ptrB;
        }

        return summary;
    }
}