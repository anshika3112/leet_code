class Solution {
public:
    bool isValid(string &ans){
        if(ans[0]=='a' || ans[0]=='e' || ans[0]=='i' || ans[0]=='o' || ans[0]=='u' || ans[0]=='A' || ans[0]=='E' || ans[0]=='I' || ans[0]=='O' || ans[0]=='U') return true;
        return false;
    }
    string toGoatLatin(string sentence) {
        string val;
        vector<string>ans;
        for(int i=0; i<sentence.length(); i++){
            string temp;
            while(i<sentence.length() && sentence[i]!=' '){
                temp+=sentence[i];
                i++;
            }
            ans.push_back(temp);
        }
        string a1 = "a";
        for(int i=0; i<ans.size(); i++){
            if(isValid(ans[i])){
                val+=ans[i];
                val+="ma";
                val+=a1;
                a1+='a';
            }else{
                char a = ans[i][0];
                val+=ans[i].substr(1,ans[i].length()-1);
                val+=a;
                val+="ma";
                val+=a1;
                a1+='a';
        }
        if(i==ans.size()-1){
            return val;
        }else{
            val+=' ';
        }
        }
        return val;
    }
};
