class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        string w = "" ;
        int count = 0 ;
        for(int i=0 ; i<words.size() ; i++)
        {
            w = words[i] ;
            int j ;
            for(j=0 ; j<w.size() ; j++)
            {
                if(w[j]!=s[j])
                    break ;
            }
            if(j==w.size())
                count++ ;
        }   
        return count ; 
    }
};
