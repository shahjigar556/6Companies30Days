#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        int start=0;
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(nums[i]>=target)
            {
                return 1;
            }
            while(start<i && sum>=target)
            {
                ans=min(ans,i-start+1);
                sum-=nums[start++];
            }
        }
        return ans==INT_MAX?0:ans;
    }
};