class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        int n = mat.size();
        int m = mat[0].size();



        for(int i =0;i<n;i++) {
            for(int j =0;j<m;j++) {

                       int ispeak = true;

                //up
                if(i>0 && mat[i-1][j]>=mat[i][j]) {
                    ispeak = false;
                }

                //down
                if(i<n-1 && mat[i][j] <= mat[i+1][j]) {
                    ispeak = false;
                }

                //left
                if(j>0 && mat[i][j] <= mat[i][j-1]) {
                    ispeak = false;
                }

                //right
                if(j<m-1 && mat[i][j+1]>=mat[i][j]) {
                    ispeak = false;
                }

              
                if(ispeak) {
                    return {i,j};
                }
            }
        }

        return {-1,-1};

        
    }
};