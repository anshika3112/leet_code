class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.size();
        int countL=n/2;
        int countR=n/2;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L')
            countL--;
            else
            countR--;
            if(countL==0||countR==0){
                count++;
                break;
            }
            else if(countL==countR){
                count++;
            }
        }
        return count;
    }
};
