class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        set<char> st;

        int l = 0;
        int currSize = 0;
        int maxSize = 0;

        for(int r = 0; r < s.length(); r++)
        {
            while(st.find(s[r]) != st.end())
            {
                st.erase(s[l]);
                l++;
                currSize--;
            }

            st.insert(s[r]);
            currSize++;

            maxSize = max(maxSize, currSize);
        }

        return maxSize;
    }
};