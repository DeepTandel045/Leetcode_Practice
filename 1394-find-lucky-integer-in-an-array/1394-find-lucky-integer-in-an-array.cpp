class Solution {
public:
    int findLucky(vector<int>& arr) {

        unordered_map<int,int>a;

        int n = arr.size();

        for(auto i : arr) {
            a[i]++;
        }

        int ans = -1;

        for(auto const& [num,freq] : a) {
            if(num == freq) {
                ans = max(ans,num);
            }
        }

        return ans;
        
    }
};