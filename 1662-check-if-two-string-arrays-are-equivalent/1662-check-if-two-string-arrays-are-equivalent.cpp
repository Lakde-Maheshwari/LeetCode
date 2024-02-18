class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n1 = word1.size();
        int m1 = word2.size();
        string w1 = "";
        string w2 = "";
        // concatenate 1st array and store in a string variable
        for(int i = 0;i<n1;i++){
            for(int j = 0;j<word1[i].size();j++)
            w1 = w1 + word1[i][j];
        }
        
        // concatenate 2nd array and store in a string variable
         for(int i = 0;i<m1;i++){
            for(int j = 0;j<word2[i].size();j++)
            w2 = w2 + word2[i][j];
        }
        
        if(w1 == w2){
            return true;
        }
        
        return false;
    }
};