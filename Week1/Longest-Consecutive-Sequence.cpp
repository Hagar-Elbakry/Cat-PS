#include <stdio.h>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();

        if(n == 0) return 0;

        map<int,pair<int,int>>mp;

        for(auto i :nums) {
            mp[i].first=1;
            mp[i].second++;
        }

        for(auto i : nums) {
            if(mp.find(i-1) != mp.end()) {
                mp[i].second--;
                if(mp[i].second == 0) {
                    mp[i].first+=mp[i-1].first;
                }
            }
        }

        int ans =  INT_MIN;
        for(auto it : nums) {
            ans = max(ans, mp[it].first);
        }

        return ans;
    }

};
