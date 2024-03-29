class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        // check if rec1 is in left of rec2
        if (rec1[2] <= rec2[0]) {
            return false;
        }
        //check if rec1 is in right of rec2
        if (rec1[0] >= rec2[2]) {
            return false;
        }
        //check if rec1 in above rec 2
        if (rec1[1] >= rec2[3]) {
            return false;
        }
        //check if rec1 is below rec2
        if (rec1[3] <= rec2[1]) {
            return false;
        }
        // if any of the condition not statisfied return true;
        return true;
    }
};
