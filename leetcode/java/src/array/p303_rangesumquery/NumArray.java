package array.p303_rangesumquery;

public class NumArray {
    private int[] prefixSum;

    public NumArray(int[] nums) {
        initializePrefixSum(nums);
    }

    private void initializePrefixSum(int[] nums){
        int n = nums.length;

        prefixSum = new int[n];
        prefixSum[0] = nums[0];

        for(int i = 1; i < n; ++i){
            prefixSum[i] = prefixSum[i-1] + nums[i];
        }
    }

    public int sumRange(int left, int right) {
        return left == 0 ? prefixSum[right] : prefixSum[right] - prefixSum[left - 1] ;
    }
}