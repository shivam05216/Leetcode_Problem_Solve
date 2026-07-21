class Solution {
public:
    
    bool searchinrow(vector<vector<int>>& matrix, int target, int row) {
        int n= matrix[0].size();

        int s=0; int e=n-1;

        while (s<=e){
             int mid= s+ (e-s)/2;

             if (target== matrix[row][mid]){
                return true;
             }
             else if (target >matrix [row][mid]){
                s= mid+1;
             }
             else 
             e=mid-1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(); int n= matrix[0].size();

        int srow= 0, erow=m-1;
        while (srow<=erow){
            int midrow= srow + (erow-srow)/2;

            if (target>= matrix[midrow][0] && target <= matrix[midrow][n-1]){
                // means the target is in this row so, apply binary search in this tree
                return searchinrow(matrix, target, midrow);

            }
            else if(target > matrix[midrow][n-1]){
                srow= midrow+1;
            }
            else {
            erow= midrow-1;
            }
        }
        return false;
    }
};