#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string pivot = strs[0];

        for(int i = 1; i < strs.size(); ++i){
            while(pivot.size() > 0 && strs[i].rfind(pivot, 0) != 0){
                pivot.pop_back();
            }
        }

        return pivot;
    }
};