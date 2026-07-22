class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int csize=0, maxsize=0;
        int n=s.length();
        int l=0;

        set<int> st;

        for(int r=0; r<n; r++){

            while (st.find(s[r])!= st.end()){
                st.erase(s[l]);
                l++;

            }
                st.insert(s[r]);
                maxsize= max(r-l+1, maxsize);
        }
        return maxsize;
    }
};