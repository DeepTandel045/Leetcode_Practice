class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int n = t.size();
        int m = s.size();
        
        int i = 0,j= 0,c=0;
        
        while(i<n) {
            
            if( s[j] == t[i] ) {
                j++,i++,c++;
            }
            else {
                i++;
            }
            
        }
        
      if(c == m)  return true;
        return false;
        
    }
};