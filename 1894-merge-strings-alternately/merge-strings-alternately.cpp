class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string newString = "";
        int n = word1.size();
        int m = word2.size();
        int i = 0;
        int j = 0;
        while(n > i && m > j){
            newString += word1[i++];
            newString += word2[j++];
        }
        for( ; i < n; i++){
            newString += word1[i];
        }
         for( ; j < m; j++){
            newString += word2[j];
        }

        return newString;
    }
};