package array.p349_intersectionoftwoarrays;

import java.util.HashSet;
import java.util.Set;

public class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        if(nums1.length > nums2.length){
            intersection(nums2, nums1);
        }

        Set<Integer> uniqueNum = new HashSet<>();

        for(int num : nums1){
            uniqueNum.add(num);
        }

        Set<Integer> intersectionResult = new HashSet<>();

        for(int num : nums2){
            if(uniqueNum.contains(num)){
                intersectionResult.add(num);
            }
        }

        return intersectionResult.stream().mapToInt(Integer::intValue).toArray();
    }
}

