class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
       int n = str1.size();
       int m = str2.size();

       int g = gcd(n, m);
       string ans = str1.substr(0,g);

       string temp1 = "";
       for(int i=0; i< str1.size()/ ans.size(); i++){
        temp1 += ans;
       }

        string temp2 = "";
       for(int i=0; i< str2.size()/ ans.size(); i++){
        temp2 += ans;
       }

       if(str1 == temp1 && str2 == temp2){
        return ans;
       }
       else return "";
    }
};