class Solution {
public:
    vector<int> shortestToChar(string s, char c) 
    {
        int n = s.size();
        vector<int>ans, idx;
        for(int i=0;i<n;i++)
            if(s[i]==c) idx.push_back(i);
        
        int cur = 0, next = 1, flag = true;
        for(int i=0;i<n;i++)
        {
            if(next < idx.size())
                ans.push_back(min(abs(idx[cur] - i), abs(idx[next] - i)));
            else ans.push_back(abs(idx[cur] - i));
            if(s[i]==c and flag) flag = false;
            else if(s[i]==c and !flag) cur++, next++;
            if(cur == idx.size()) cur--;
        }
        return ans;
    }
};
