class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int mul = 1;
        int n1 = n;
        while(n1){
        int num = n1 % 10;
        sum = sum + num; 
        mul = mul * num;
        n1 = n1 / 10;
        }
        int res = sum + mul;
        if(n % res == 0) return true;
        else return false;
    }
};