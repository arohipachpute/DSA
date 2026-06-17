class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ans;
        for(int i = 0; i<nums.size(); i++){
            int remaining = target - nums[i];
            if(ans.find(remaining) != ans.end()){
                   return {ans[remaining], i};
            }else{
              ans[nums[i]] = i;  
            }
        }
        return {};
    }
};