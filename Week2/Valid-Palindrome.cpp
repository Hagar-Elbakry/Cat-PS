#include <stdio.h>
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int l=0,r=n-1;
        while(l<r) {
            if(!iswalnum(s[l])) l++;
            else if(!iswalnum(s[r])) r--;
            else {
                if(s[l] != s[r]) return false;
                else l++,r--;
            }
        }

        return true;
    }
};
