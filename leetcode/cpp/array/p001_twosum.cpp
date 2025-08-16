#include <vector>
#include <unordered_map>

using std::vector;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> seenNums; 

        for(int i = 0; i < nums.size(); ++i){
            int dif = target - nums[i];

            if(seenNums.find(dif) != seenNums.end()){
                return vector<int> ({seenNums[dif], i});
            }

            seenNums.insert({nums[i], i});
        }

        return vector<int>();
    }
};