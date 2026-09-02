class Solution {
public:
    string removeStars(string s) {

        int n = s.size();

        stack<char>a;

        for(int i =0;i<n;i++) {
            if(s[i]!='*') {
                a.push(s[i]);
            }
            else {
                a.pop();
            }
        }

        string ans = "";

        int asize = a.size();

        for(int i=0;i<asize;i++) {
            ans += a.top();
            a.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;
        
    }
};