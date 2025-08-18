#include <vector>

using std::vector;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        int i = 0; 

        while(i < nums.size() && k < nums.size()){
            if(nums[i] != val){
                nums[k++] = nums[i];
            } 

            i++;
        }
        
        return k;
    }
};