#include<algorithm>
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         if (std::next_permutation(nums.begin(), nums.end())) {
        for (int x : nums) std::cout << x << " "; 
    }
  
    }
};