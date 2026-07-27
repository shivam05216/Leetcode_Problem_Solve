class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int cpro =0;
        int maxpro=0;
        int n=nums.size();

        for (int i=0; i<n;i++){
            for (int j=i+1; j<n; j++){
                 maxpro = max((nums[i]-1)*(nums[j]-1), maxpro);
            }
        }

        return maxpro;
        
    }
};