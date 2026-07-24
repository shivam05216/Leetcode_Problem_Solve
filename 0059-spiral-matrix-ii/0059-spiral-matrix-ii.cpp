class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       int  srow=0, erow=n-1;
       int scol=0, ecol=n-1;
       int val=1;
       vector<vector<int>> mat(n,vector<int> (n,0));

       while (srow<=erow && scol<=ecol){
        //top
        for (int i=scol; i<=ecol; i++){

            mat[srow][i]= val;
            val++;

        }
        // right
        for (int i=srow+1; i<=erow; i++){
           
            if (scol==ecol)
            break;
            mat[i][ecol]= val;
            val++;
        }
        //bottom
        for (int i=ecol-1; i>=scol; i--){

            if (srow==erow)
            break;
            mat[erow][i]= val;
            val++;
        }
        //left
        for (int i=erow-1; i>=srow+1; i--){

            mat[i][scol]= val;
            val++;
        }
        srow++;
        erow--;
        scol++;
        ecol--;
       }
       return mat;
    }
};