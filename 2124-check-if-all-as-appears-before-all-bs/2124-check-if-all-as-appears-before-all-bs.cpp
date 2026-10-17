class Solution {
public:
    bool checkString(string s) {

        string d = s;

        sort(s.begin(),s.end());

        return (s == d) ;
        
    }
};