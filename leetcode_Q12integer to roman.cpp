class Solution {
public:
    string intToRoman(int num) {
        map<int,string>R;
        R[1]="I";
        R[4]="IV";
        R[5]="V";
        R[9]="IX";
        R[10]="X";
        R[40]="XL";
        R[50]="L";
        R[90]="XC";
        R[100]="C";
        R[400]="CD";
        R[500]="D";
        R[900]="CM";
        R[1000]="M";
        string result= "";
         for (auto it = R.rbegin(); it != R.rend(); ++it) {
            int value = it->first;
            string symbol = it->second;

            while (num >= value) {
                result += symbol;
                num -= value;
            }
        
    }
    return result;
    }

};
