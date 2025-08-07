package array.p350_intersectionoftwoarraysii;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        if(nums1.length > nums2.length){
            intersect(nums2, nums1);
        }

        Map<Integer, Integer> numCopy = new HashMap<>();

        for(int num : nums1){
            numCopy.put(num, numCopy.getOrDefault(num, 0) + 1);
        }

        List<Integer> intersection = new ArrayList<>();

        for(int num : nums2){
            int count = numCopy.getOrDefault(num, 0);

            if(count > 0){
                intersection.add(num);
                numCopy.put(num, count - 1);
            }
        }

        return intersection.stream().mapToInt(Integer::intValue).toArray();
    }
}