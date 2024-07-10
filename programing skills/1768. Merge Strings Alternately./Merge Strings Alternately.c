class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        int i = 0, j = 0;
        while (i < word1.length() && j < word2.length()) {
            merged += word1[i++];// appending values of word1 n 2 in mergerd alternately 
            merged += word2[j++];
        }
        // Append remaining characters of the longer string
        while (i < word1.length()) {
            merged += word1[i++];
        }
        while (j < word2.length()) {
            merged += word2[j++];
        }
        return merged;
    }
};
