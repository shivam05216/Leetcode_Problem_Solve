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
       vector<int> prefix(nums.size(), 1);
       vector<int> sufix(nums.size(), 1);
       //prefix
       int n=nums.size();

       prefix[0]=1;

       for (int i=1; i<n; i++){
        prefix[i]= prefix[i-1]*nums[i-1];
       }

       // sufix
       sufix[n-1]=1;
       for (int i=n-2; i>=0; i--){
        sufix[i]= sufix[i+1]*nums[i+1];
       }

       // ans

       for(int i=0; i<n; i++){
        ans[i]= prefix[i]*sufix[i];
       }

       return ans;
   
    }
};