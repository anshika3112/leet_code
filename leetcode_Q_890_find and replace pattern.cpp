class Solution {
public:
//normalization the words and patten into a smiliar format
// so that we can compare the string
    void createMapping(string& str)
    {
        char start='a';
        char mapping[300]={0};
        for(auto ch:str)
        {
            if(mapping[ch]==0){
            mapping[ch]=start;
            start++;
            }
        }
        //update the string
        for(int i=0;i<str.length();i++)
        {
            char ch=str[i];
            str[i]=mapping[ch];
        }
    } 
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        //firstly normaize the pattern
        createMapping(pattern);
        for(string s:words)
        {
            string temp=s;
            createMapping(temp);
            if(temp==pattern)
            {
                  ans.push_back(s);
            }
        }
        return ans;
    }
};
