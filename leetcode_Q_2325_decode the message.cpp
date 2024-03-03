class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char,char>m;
        int c=0;
        int i=0;
        while(i<key.length())
        {
            if(key[i]==' ')
            i++;
            else if((key[i]>='a' && key[i]<='z') && m.find(key[i])==m.end())
            {
                char ch=char('a'+c);
                char s=key[i];
                m[s]=ch;
                i++;
                c++;
            }
            else if(m.find(key[i])!=m.end())
            {
                i++;
            }
        }
        string ans="";
        for(int i=0;i<message.length();i++)
        {
            if(message[i]==' ')
            {
                ans.push_back(' ');
            }
            else if(message[i]>='a' && message[i]<='z')
            {
                ans.push_back(m[message[i]]);
            }
        }
        return ans;
    }
};
