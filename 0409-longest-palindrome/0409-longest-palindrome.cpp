class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>lower(26,0),upper(26,0);
        for(int i = 0;i<s.size();i++){
            if(s[i] >= 'a'){// check for the char is lowercase or upper case
                lower[s[i] - 'a']++;
            }
            else{
                upper[s[i] - 'A']++;
            }
        }
        int count  = 0;
        bool odd = 0; // checks if any character is repeating odd no. of times
//         finding the count of even and odd logic
        for(int i = 0;i<26;i++){
            if(lower[i] % 2 == 0){
                count += lower[i];
            }
            
            else{
                count += lower[i] - 1;
                odd = 1;
            }
            if(upper[i] % 2 == 0){
                count += upper[i];
            }
            
            else{
                count += upper[i] - 1;
                odd = 1;
            }
        }
        
        return count + odd;
    }
};