// The code is written by Jigar Shah
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<vector<string>> Anagrams(vector<string>& string_list) {
        unordered_map<string,vector<string>> m;
        for(string x:string_list)
        {
            string y=x;
            sort(y.begin(),y.end());
            m[y].push_back(x);
        }
        vector<vector<string>> ans;
        for(auto x:m)
        {
            //cout<<"key="<<x.first<<endl;
            ans.push_back(x.second);
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<string> words = {"act","god","cat","dog","tac"};
    vector<vector<string>> ans;
    ans=obj.Anagrams(words);
    int i,j;
    for(i=0;i<ans.size();i++)
    {
        for(j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}