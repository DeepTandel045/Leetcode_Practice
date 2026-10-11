class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {

        int n = spaces.size();

        int i =0,k=0;
        
        string ans ="";

        while(k<n) {

            if(i == spaces[k]) {
                ans += ' ';
                k++;
              
            }
            else {
                ans += s[i];
                i++;
            }
        }

        while(i<s.size() ) {
            ans+= s[i];
            i++;
        }

        return ans;
    }
};