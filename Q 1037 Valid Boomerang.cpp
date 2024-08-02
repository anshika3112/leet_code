class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        // Calculate the area of the triangle formed by the points
        int area = points[0][0] * (points[1][1] - points[2][1]) +
                    points[1][0] * (points[2][1] - points[0][1]) +
                    points[2][0] * (points[0][1] - points[1][1]);

        // If area is zero, points are collinear and not a boomerang
        return area != 0;
    }
};
