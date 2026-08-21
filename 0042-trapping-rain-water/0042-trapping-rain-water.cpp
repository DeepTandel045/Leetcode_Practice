class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();

        vector<int>left(n),right(n);

        int leftmax=0 , rightmax=0;
        
        for(int i =0;i<n;i++) {
            if(leftmax<height[i]) {
                leftmax = height[i];
            }
            left[i] = leftmax; 
        }


        for(int i = n-1;i>=0;i--) {
            if(rightmax<height[i]) {
                rightmax = height[i];
            }
            right[i] = rightmax;
        }

        long long water =0;

        for(int i =0;i<n;i++) {
            water += min(left[i],right[i]) - height[i];
        }
        
        return water;
    }
};