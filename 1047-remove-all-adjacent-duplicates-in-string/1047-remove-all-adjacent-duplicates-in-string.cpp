class Solution {
public:
    string removeDuplicates(string s) {

        stack<char>a;

        int n = s.size();
       

        for(int i =0;i<n;i++)  {
            if(!a.empty() && a.top() == s[i]) {
                a.pop();
            }else {
                a.push(s[i]);
            }
        }

         string ans = ""; 

        while(!a.empty()) {
            ans += a.top();
            a.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};