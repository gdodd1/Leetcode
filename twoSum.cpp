class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> s;
        if(nums.size() == 2){
            s.push_back(0);
            s.push_back(1);
            return s;
        }
        for (int i = 0; i < nums.size(); i++){
            for (int j = i+1; j < nums.size(); j++){
                if (nums[i] + nums[j] == target){
                    s.push_back(i);
                    s.push_back(j);
                    break;
                }
                if (s.size() > 0) break;
            }
            if (s.size() > 0) break;
        }

        return s;
    }
};
