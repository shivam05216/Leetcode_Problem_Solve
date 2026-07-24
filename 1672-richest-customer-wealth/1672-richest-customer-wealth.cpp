class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int n = accounts.size();
        int m = accounts[0].size();
        int row=0;

       int  csum, maxsum=0;

       for (int i=0; i<=n-1;i++){
        csum=0;
        for(int j=0; j<=m-1;j++){
        csum+=accounts[i][j];
       }

       maxsum=max(csum, maxsum);
     
       }
       return maxsum;
        
    }
};