package array.p448_findallnumbers;

import java.util.ArrayList;
import java.util.List;

public class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        for(int num : nums){
            int index = Math.abs(num) - 1;

            if(nums[index] > 0){
                nums[index] = -nums[index];
            }
        }

        List<Integer> missingNumbers = new ArrayList<>();
        for(int i = 0; i < nums.length; ++i){
            if(nums[i] > 0){
                missingNumbers.add(i+1);
            }
        }

        return missingNumbers;
    }
}