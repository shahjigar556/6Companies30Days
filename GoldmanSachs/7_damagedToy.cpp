// The code is written by Jigar Shah
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findPosition(int n , int m , int k) {
        if(n==1){
            return 1;
        }
        int ans=(m%n+k-1)%(n);
        return ans==0?n:ans;
    }
};


int main() {
    int N,M,K;
    cin>>N>>M>>K;
    Solution ob;
    cout << ob.findPosition(N,M,K) << endl;
    return 0;
}  