class Solution {
public:
    string defangIPaddr(string address) {
        string t;
        for(auto x:address)
        {
            if(x=='.')
            {
                t+="[.]";
            }
            else t+=x;
        }
        return t;
    }
};
