class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {

        int n = mat.size();
        int m = mat[0].size();

        int index = 0,c1=0;

        for(int i =0;i<n;i++) {

            int c=0;
            for(int j = 0;j<m;j++) {

                if(mat[i][j] == 1) {
                    c++;
                }

            }

            if(c>c1) {
                c1 = c;
                index = i;
            }
        }

        return {index,c1};
        
    }
};