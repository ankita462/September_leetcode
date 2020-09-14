class Solution {
public:
    int rob(vector<int>& nums) {
       if (nums.size() <= 2)
		{
			if (nums.size() == 0)
			{
				return 0;
			}
			return *max_element(nums.begin(), nums.end());
		}
		vector<int> cal;
		cal.push_back(nums[0]);
		cal.push_back(max(nums[0], nums[1]));
    
		int index = 2;
		for(; index < nums.size(); ++index)
		{
			cal.push_back(max(cal[index - 1], cal[index - 2] + nums[index]));
		}
    
		return cal[index - 1]; 
    }
};
