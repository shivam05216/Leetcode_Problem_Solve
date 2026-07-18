class Solution {
public:
    bool isPalindrome(string s) {

        string temp;

        // Convert to lowercase and keep only letters/digits
        for(char c : s)
        {
            if(isalnum(c))
                temp += tolower(c);
        }

        int l = 0;
        int r = temp.length() - 1;

        while(l < r)
        {
            if(temp[l] != temp[r])
                return false;

            l++;
            r--;
        }

        return true;
    }
};