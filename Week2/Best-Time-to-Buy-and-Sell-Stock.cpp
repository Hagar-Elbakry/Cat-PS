#include <stdio.h>
#include <stdlib.h>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int>mn(n);
        mn[0] = prices[0];
        for(int i=1;i<n;i++) {
            mn[i] = min(mn[i-1], prices[i]);
        }

        int ans = 0;

        for(int i=1;i<n;i++) {
            ans = max(ans, prices[i]-mn[i-1]);
        }

        return ans;
    }
};
