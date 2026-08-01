class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;

        for (int k = 0; k < s.length(); k++)    
        {
            if (!isalnum(s[k]))
            {
                s.erase(k, 1);
                k--;
            }
        }

        int j = s.length() - 1;
        while (i < j)
        {
            if (tolower(s[i]) != tolower(s[j]))
                return false;
            
            i++;
            j--;
        }
        return true;
    }
};