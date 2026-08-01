class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.length() - 1;

        // Do not allow the point to cross itself
        while (l < r)
        {
            // Walk to right until get the first valid element
            while (l < r && !alphaNum(s[l]))
            {
                l++;
            }

            // Go left until find the first valid element
            while (r > l && !alphaNum(s[r]))
            {
                r--; 
            }
            
            // Check if they're equal
            if (tolower(s[l]) != tolower(s[r]))
            {
                return false;
            }

            l++; r--;
        }
        return true;
    }
    
    bool alphaNum(char c) {
        return (c >= 'A' && c <= 'Z' ||
                c >= 'a' && c <= 'z' ||
                c >= '0' && c <= '9');
    }
};
