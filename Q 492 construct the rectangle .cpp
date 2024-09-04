class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int>rect;
        int width=1;
        int length=area;
        for(int i=2;i<=sqrt(area);++i)
        {
            if(area%i==0)
            {
                width=i;
                length=area/i;
            }
        }
        rect.push_back(length);
        rect.push_back(width);
        return rect;
    }
};
