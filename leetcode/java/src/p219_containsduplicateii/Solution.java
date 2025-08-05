package p219_containsduplicateii;

public class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        if(nums == null || nums.length <= 1){
            return false;
        }

        Map<Integer, Integer> numsTester = new HashMap<>();

        for(int i = 0; i < nums.length; ++i){
            if(numsTester.containsKey(nums[i]) && Math.abs(i - numsTester.get(nums[i])) <= k){
                return true;
            }

            numsTester.put(nums[i], i);
        }

        return false;
    }
}
