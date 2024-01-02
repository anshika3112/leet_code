class Solution {
public:
    int romanToInt(string s) {
    map<char, int> Romanmap;
    Romanmap['I']=1;
    Romanmap['V']=5;
    Romanmap['X']=10;
    Romanmap['L']=50;
    Romanmap['C']=100;
    Romanmap['M']=1000;
    Romanmap['D']=500;
    int result = 0;
    int prevValue = 0;
       for (int i = s.length() - 1; i >= 0; i--) {
        int currentValue =Romanmap[s[i]];
      if (currentValue < prevValue)
       {
            result -= currentValue;
        } 
        else 
        {
            result += currentValue;
        }

        prevValue = currentValue;
    }
    return result;
    }
    
};
