package p169_majorityelement;

import java.util.HashMap;
import java.util.Map;

public class Solution {
    public int majorityElement(int[] nums) {
        int n = nums.length;
        int number = nums[0];
        Map<Integer, Integer> elements = new HashMap<>();

        for(int i = 0; i < n; ++i){
            if(elements.containsKey(nums[i])){
                elements.put(nums[i], elements.get(nums[i]) + 1);
            } else {
                elements.put(nums[i], 1);
            }

            if(elements.get(nums[i]) > n/2){
                number = nums[i];
                break;
            }
        }

        return number;
    }
}
