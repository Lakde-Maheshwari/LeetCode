class Solution {
public:
    bool isPalindrome(int n) {
        int num = n;
        long long rem = 0;
        long long sum = 0;
        if(num < 0){
          return false;
        }
        while(n > 0){
            rem = n % 10;
            sum = sum * 10 + rem;
            n = n / 10;
        }
        if(num != sum){
            return false;
        }
        return true;
    }
};