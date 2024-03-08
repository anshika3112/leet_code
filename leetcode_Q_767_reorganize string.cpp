class Solution {
public:
    string reorganizeString(string s) {
        int hash[26]={0};
        for(int i=0;i<s.size();i++)
        {
            hash[s[i]-'a']++;
        }
        // find the most frequant character
        char most_freq_character;
        int max_freq=INT_MIN;
        for(int i=0;i<26;i++)
        { 
            if(hash[i]>max_freq)
            {
              max_freq=hash[i];
              most_freq_character=i+'a';
            }
        }
        int index=0;
        while(max_freq>0 && index<s.size()>0)
        {
            s[index]=most_freq_character;
            max_freq--;
            index+=2;
        }
        if(max_freq!=0)
        {
            return "";
        }
        hash[most_freq_character-'a']=0;
        for(int i=0;i<26;i++)
        {
            while(hash[i]>0)
            {
              index=index>=s.size()?1:index;
              s[index]=i+'a';
              index+=2;
              hash[i]--;
            }
        }
        return s;
    }
};
