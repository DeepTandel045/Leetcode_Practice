class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {


        int n = piles.size();

        int maxi = *max_element(piles.begin(),piles.end());

        int low = 1;
        int high = maxi;
        int ans;

        while(low<=high) {

            int mid = low + (high - low)/2;

            long long  sum =0;

            for(int j =0;j<n;j++) {

                sum+= ceil(double(piles[j])/double(mid));

            }

            if(sum<=h ) {
                ans = mid;
                high = mid-1;
            }
            else {
                low = mid+1;
            }

        }

        return ans;
        
    }
};