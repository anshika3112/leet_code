class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int c=0;
        for(auto i:words)
        {
            int index=i.find(pref,0);
            if(index==0)c++;
        }
        return c;
    }
};
