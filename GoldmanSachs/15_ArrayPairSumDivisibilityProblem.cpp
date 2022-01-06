// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here
        unordered_map<int,int> freq;
        int i;
        for(int x:nums)
        {
            int rem=(x%k+k)%k;
            freq[rem]++;
        }
        for(auto x:nums)
        {
            int rem=(x%k+k)%k;
            if(freq[rem]==freq[k-rem])
            {
                continue;
            }
            else if((rem==0 || rem==k/2) && freq[rem]%2==0)
            {
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends