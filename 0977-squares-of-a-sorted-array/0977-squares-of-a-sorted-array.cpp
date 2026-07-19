class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0, r=nums.size()-1;
       vector<int> result(nums.size());

        for (int k=nums.size()-1; k>=0; k--){
            int m= nums[l]*nums[l];
            int n= nums[r]*nums[r];
            if (n>m){
            result[k]= n;
            r--;
            
            }
            else {
             result[k]= m;
             l++;
            
              }
        }
        return result;

    }
};