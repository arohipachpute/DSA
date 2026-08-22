class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int , int> freq;
        for(int num : nums){
            int rem = k - num;
            if(freq[rem] > 0){
                count++;
                freq[rem]--;
            }
            else{
                freq[num]++;
            }
        }
        return count;
    }
};