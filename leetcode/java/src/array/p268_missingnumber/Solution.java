package p268_missingnumber;

public class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;

        int sn = ((n+1) * n)/2;
        int s = 0;

        for(int i = 0; i < n; ++i){
            s += nums[i];
        }

        return sn-s;
    }
}
