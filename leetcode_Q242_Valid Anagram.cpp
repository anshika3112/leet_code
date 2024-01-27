class Solution {
public:
    bool isAnagram(string s, string t) {
        int fretable[256]={0};
        for(int i=0;i<s.size();i++)
        {
            fretable[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            fretable[t[i]]--;
        }
        for(int i=0;i<256;i++)
        {
            if(fretable[i]!=0){
                return false;
            }
        }
        return true;
    }
};
