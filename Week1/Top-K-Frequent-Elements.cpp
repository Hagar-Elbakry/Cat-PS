#include <stdio.h>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>freq;
        vector<int>ans;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            freq[nums[i]]++;
        }

        vector<pair<int, int> > v;
        for (auto it : freq) {
            v.push_back(it);
        }

        sort(v.begin(),v.end(),cmp);

        for(auto it:v) {
            if(k) {
                ans.push_back(it.first);
                k--;
            }
        }

        return ans;
    }

    static bool cmp(pair<int, int>& a, pair<int, int>& b){
        return a.second > b.second;
    }
};


