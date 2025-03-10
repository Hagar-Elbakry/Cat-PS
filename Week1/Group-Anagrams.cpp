#include <stdio.h>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;

        for(auto s : strs) {
            vector<int>freq(26,0);
            for(auto c : s) {
                freq[c - 'a']++;
            }

            string key = "";
            for(int i=0;i<26;i++) {
                key+=to_string(freq[i]) + "$";
            }
            mp[key].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto it:mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};
