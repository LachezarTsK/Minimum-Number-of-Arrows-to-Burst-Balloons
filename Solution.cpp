
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:

    int findMinArrowShots(vector<vector<int>>&points) {

        sort(points.begin(), points.end(), compareSecondColumn);
        int arrows = 1;
        int minEnd = points[0][1];
        size_t size = points.size();

        for (size_t i = 1; i < size; i++) {
            if (points[i][0] > minEnd) {
                minEnd = points[i][1];
                arrows++;
            }
        }
        return arrows;
    }

    static bool compareSecondColumn(const vector<int>& v1, const vector<int>& v2) {
        return v1[1] < v2[1];
    }
};
