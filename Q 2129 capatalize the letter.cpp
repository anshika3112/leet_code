class Solution {
public:
    string capitalizeTitle(string s) {
        int i,j;
        string ans="";
        string ans1="";
        string ans3="";
        vector<string>vec;
          vector<string>vec1;
        for(i=0; i<s.length(); i++){
            if(s[i]==' '){
               
                vec.push_back(ans);
                 vec.push_back(" ");
                ans="";
            }
            else{
                ans+=s[i];
            }
        }
        vec.push_back(ans);
       for(i=0; i<vec.size(); i++){
            ans1=vec[i];
            for(j=0; j<ans1.length(); j++){
                 if(ans1.length()==2 || ans1.length()==1){
                   if(isupper(ans1[j])){
                       ans1[j]=ans1[j]+32;
                   }
                    
                }
               
                else{
                    if(j==0){
                        if(islower(ans1[j]))
                        ans1[j]=ans1[j]-32;
                    }
                    else{
                        if(isupper(ans1[j]))
                        ans1[j]=ans1[j]+32;
                    }
                }
            }
            
            vec1.push_back(ans1);
        }
        for(i=0; i<vec1.size(); i++){
            ans3+=vec1[i];
        }
        return ans3;
        
    }
};
