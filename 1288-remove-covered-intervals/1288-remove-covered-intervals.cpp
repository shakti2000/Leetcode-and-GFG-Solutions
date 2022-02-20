class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comparator);
        int cur = 0;
        int remaining = intervals.size();
        for (int i = 1; i < intervals.size(); ++i) {
            if (intervals[i][1] <= intervals[cur][1]) --remaining;
            else cur = i;
        }
        return remaining;
    }
    
    static bool comparator(vector<int>& int1, vector<int>& int2) {
        if (int1[0] == int2[0]) return int1[1] > int2[1];
        else return int1[0] < int2[0];
    }
};