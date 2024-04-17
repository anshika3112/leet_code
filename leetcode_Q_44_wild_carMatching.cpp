class Solution {
public:
bool recr(int i,int j,string & pat,string&str)
{
     if(i<0 && j<0) return true;
      if(j>=0 && i<0) return false;
        if(i>=0 && j<0){
           for(int a=0;a<=i;a++) if(pat[a]!='*') return false;
            return true; 
        }
         if(pat[i]==str[j] || pat[i]=='?') return recur(i-1, j-1, pat, str);
        
        if(pat[i]=='*') return recur(i-1, j, pat, str) || recur(i, j-1, pat, str);
        
        return false;
}
    bool isMatch(string s, string p) {
         return recur(p.size()-1, s.size()-1, p, s);
    }
};
