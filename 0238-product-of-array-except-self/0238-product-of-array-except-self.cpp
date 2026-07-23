class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      // bruteforce  
     /*   vector<int> ans(nums.size(), 1);

        for (int i=0; i<nums.size();i++){
          
           for (int j=0; j<nums.size(); j++){
            if (i!=j){
            ans[i]*=nums[j];
            }
           }
        }
        return ans;*/
// calculate pefix and suffix product for all the indexes using separate loopsand then multiply them for eaxh index
    
       vector<int> ans(nums.size(), 1);
      
       //prefix
       int n=nums.size();

      

       for (int i=1; i<n; i++){
        ans[i] *= ans[i-1]*nums[i-1];
       }

       // sufix

       int sufix =1;
       for (int i=n-2; i>=0; i--){
        sufix*= nums[i+1];
        ans[i]*=sufix;
       }

       // ans


       return ans;
   
    }
};