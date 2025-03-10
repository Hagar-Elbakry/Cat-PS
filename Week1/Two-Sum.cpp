#include <stdio.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<n;i++) {
            mp[nums[i]]=i;
        }

        for(int i=0;i<n;i++) {
            int diff = target-nums[i];
            if(mp.count(diff) && mp[diff] !=i) {
                ans.push_back(i);
                ans.push_back(mp[diff]);
                break;
            }
        }

        return ans;
    }
};
