#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestMountain(vector<int>& a) {
        int i,j;
        int n=a.size();
        int ans=0;
        for(i=0;i<n;i++)
        {
            for(j=i-1;j>=0;j--)
            {
                if(a[j]>=a[j+1])
                {
                    break;
                }
            }
            int left=j+1;
            for(j=i+1;j<n;j++)
            {
                if(a[j-1]<=a[j])
                {
                    break;
                }
            }
            int right=j-1;
            //cout<<"x="<<a[i]<<" i="<<i<<" left="<<left<<" right="<<right<<endl;
            if(left!=i && right!=i)
            {
                ans=max(ans,right-left+1);
            }
        }
        return ans;
    }
};