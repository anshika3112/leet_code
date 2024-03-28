class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>ans;
        char a=s[0];
        char b=s[3];
        int startint=int(s[1])-'0';
         int endint=int(s[4])-'0';
        for(char i=a;i<=b;i++)
        {
           for(int j=startint;j<=endint;j++)
           {
            string str="";
            str+=i;
            str+=to_string(j);
            ans.push_back(str);
           }
        }
        return ans;
    }
};
