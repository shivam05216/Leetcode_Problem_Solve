class Solution {
public:
    int maxProduct(vector<int>& nums) {
      /*  int cpro =0;
        int maxpro=0;
        int n=nums.size();

        for (int i=0; i<n;i++){
            for (int j=i+1; j<n; j++){
                 maxpro = max((nums[i]-1)*(nums[j]-1), maxpro);
            }
        }

        return maxpro;*/

    
        int n = nums.size();
        sort(nums.begin(), nums.end());

        return (nums[n - 1] - 1) * (nums[n - 2] - 1);
        
    }
};