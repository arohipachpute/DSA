class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int j = 0;
        int start = 0;

        for(int i = 0; i < n; i++){
            if(i == n - 1 || chars[i] != chars[i+1]){

                int count = i - start + 1;
                
                chars[j] = chars[start];
                j++;

                if(count > 1){
                    string s = to_string(count);
                    for(char c : s){
                        chars[j] = c;
                        j++;
                    }
                   
                }
                 start = i + 1;
            }
           
        }
        return j;
        
    }
};