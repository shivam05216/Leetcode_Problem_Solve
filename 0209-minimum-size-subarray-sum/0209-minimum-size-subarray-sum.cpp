class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0; int sum=0;
        int csize=0, minsize=INT_MAX;
        
        for(int r=0; r<n; r++){
            sum+=nums[r];
            csize++;

            while(sum>=target){
                minsize= min(csize, minsize);
                sum-=nums[l];
                l++;
                csize--;
            }

        }
        if(minsize==INT_MAX) return 0;
        else return minsize;

    }
};