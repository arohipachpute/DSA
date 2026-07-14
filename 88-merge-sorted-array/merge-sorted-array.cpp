class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> nums3;
        int b = 0, c = 0;

    while(b < m && c < n){
        if(nums1[b] <= nums2[c]) nums3.push_back(nums1[b++]);
        else nums3.push_back(nums2[c++]);
    }
    while(b < m) nums3.push_back(nums1[b++]);
    while(c < n) nums3.push_back(nums2[c++]);
    
    nums1 = nums3;  
    }
};