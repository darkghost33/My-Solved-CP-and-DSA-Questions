class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>mergedIntervals;
        if(intervals.size() == 0)
            return mergedIntervals;
        
        sort(intervals.begin(),intervals.end());
        vector<int>tempIntervals = intervals[0];
        
        for(auto i: intervals)
        {
            if(i[0] <= tempIntervals[1])
                tempIntervals[1] = max(i[1],tempIntervals[1]);
            else{
                mergedIntervals.push_back(tempIntervals);
                tempIntervals = i;
                }
        }
        
        mergedIntervals.push_back(tempIntervals);
        return mergedIntervals;
    }
};
