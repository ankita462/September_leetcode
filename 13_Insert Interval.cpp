class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ret;
        int n = intervals.size();
        for (int i = 0; i < n; i++)
        {
			
            if (intervals[i][1] < newInterval[0])
            ret.push_back(intervals[i]);
            else if (intervals[i][0] > newInterval[1])
            {
                ret.push_back(newInterval);
                newInterval = intervals[i]; 
            }
            else if(intervals[i][1] >= newInterval[0] || intervals[i][0] <= newInterval[1])
            newInterval={min(intervals[i][0],newInterval[0]),max(newInterval[1],intervals[i][1])};
            
        }
        ret.push_back(newInterval); 
        return ret;
    }
};
