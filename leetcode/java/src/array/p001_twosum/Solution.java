package p001_twosum;

import java.util.HashMap;
import java.util.Map;

public class Solution {
    public int[] twoSum(int[] nums, int target) {

        Map<Integer, Integer> numeros = new HashMap<>();

        for(int i = 0; i < nums.length; ++i) {
            int aux = target - nums[i];

            if(numeros.containsKey(aux))
                return new int[]{numeros.get(aux), i};

            numeros.put(nums[i], i);
        }

        return new int[]{};
    }
}