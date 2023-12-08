class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        string str="";
        int count=0;
        while(low<=high){
            str=to_string(low);
            if(str.size()%2==0){
                if(accumulate(str.begin(),str.begin()+str.size()/2,0)==accumulate(str.begin()+str.size()/2,str.end(),0)){
                    count++;
                }
            }
            low++;
        }
        return count;
    }
};
