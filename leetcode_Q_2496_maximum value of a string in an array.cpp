class Solution {
public:
    int maximumValue(vector<string>& strs) {
       int res=0;
        for (int i = 0; i < strs.size(); i++)
        {
            bool num=true;
            int temp=0;
            for (int j = 0; j < strs[i].size(); j++)
            {
                if (num == true && strs[i][j] >= 48 && strs[i][j] <= 57)
                    temp = temp *10 + strs[i][j] - '0';
                 else
                 {
                    temp = strs[i].size();
                    num = false;
                    continue;
                 }       
            }
            res = max(temp, res);
        }
        return res;
    }
};
