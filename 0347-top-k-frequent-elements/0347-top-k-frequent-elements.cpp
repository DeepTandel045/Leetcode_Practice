class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        int n = nums.size();

        map<int,int>mp;
        vector<int>a;

        for(int i =0;i<n;i++) {
            mp[nums[i]]++;
        }

        vector<pair<int,int>>v;

        for(auto &i : mp) {

            v.push_back({i.first,i.second});
        }

        
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });

        for(int i=0;i<k;i++) {
            a.push_back(v[i].first);
        }

        return a;


        
    }
};