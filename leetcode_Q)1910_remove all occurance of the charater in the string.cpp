class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=s.length();
        int m=part.length();
        if(m>n) return s;
        int index=0;
        while(s.find(part)!=string::npos)
        { 
              s.erase(s.find(part),part.length());
        }
        return s;
    }
};
