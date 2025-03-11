#include <stdio.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(),ans=0;
        int l=0,r=0;
        map<char,int>freq;
        while(r<n) {
            freq[s[r]]++;
            if(freq[s[r]] == 1) {
                r++;
            } else {
                ans = max(ans, r-l);
                while(freq[s[r]]) {
                    freq[s[l]]--;
                    if(!freq[s[l]]) {
                        l++;
                    }
                }
            }
        }
        return max(ans,r-l);
    }
};
