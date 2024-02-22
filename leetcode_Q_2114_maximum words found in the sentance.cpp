class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int n = sentences.size();
        int maxi = 0;       

        for(int i=0;i<n;i++){

            int count = 1;

            for(int j=0;j<sentences[i].size();j++){

                // For particular word(char)
                if(sentences[i][j] == ' ')
                count++;
            }
            maxi = max(maxi,count);
        }
        return maxi;
    }
};
