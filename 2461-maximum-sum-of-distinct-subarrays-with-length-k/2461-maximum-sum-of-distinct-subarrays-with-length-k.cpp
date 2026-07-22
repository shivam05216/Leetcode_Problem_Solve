class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long csum=0,  maxsum=0;
        int l=0;
        set<int> st;

        for ( int r=0; r<nums.size(); r++){
            while(st.contains(nums[r]) || st.size()==k ){
                csum-=nums[l];
                st.erase(nums[l]);
                l++;
            }
            
            csum+=nums[r];
            st.insert(nums[r]);

            if (st.size()==k){
                maxsum= max(csum, maxsum);
            }
        }
        return maxsum;
    }
};