class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       vector<bool> answer;
       int n = candies.size();
       int m = *max_element(candies.begin(), candies.end());
       for(int i=0; i<n; i++){
        if(candies[i] + extraCandies >= m){
            answer.push_back(true);
        }
        else{
            answer.push_back(false);
        }
       } 
       return answer;
    }
};