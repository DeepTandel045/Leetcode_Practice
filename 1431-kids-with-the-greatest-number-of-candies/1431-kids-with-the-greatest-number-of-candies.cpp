class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool>ans;

        int n = candies.size();

        int g = -1;

        for(int i =0;i<n;i++) {
            if(g<candies[i]) {
                g = candies[i];
            }
        }



        for(int i =0;i<n;i++) {
            if(candies[i]+extraCandies>=g) {
                ans.push_back(true);
            }
            else {
                ans.push_back(false);
            }
        }

        return ans;
        
    }
};