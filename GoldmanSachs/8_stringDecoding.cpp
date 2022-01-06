
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
	    long long int t[10001];
	    long long int fun(string str,int n)
	    {
	        long long int mod=1000000007;
	        if(n==0 || n==1){
	            return 1;
	        }
	        if(str[0]=='0'){
	            return 0;
	        }
	        long long int cnt=0;
	        if(t[n]!=-1){
	            return t[n];
	        }
	        long long int c1,c2;
	        c1=c2=0;
	        if(str[n-1]>'0')
	        {
	            c1=fun(str,n-1)%mod;
	        }
	        if(str[n-2]=='1' || str[n-2]=='2' && str[n-1]<'7')
	        {
	            c2=fun(str,n-2)%mod;
	        }
	        return t[n]=(c1+c2)%mod;
	    }
		int CountWays(string str){
		    
		    int n=str.length();
		    if(n==0 || (n==1 && str[0]=='0')){
		        return 0;
		    }
		    memset(t,-1,sizeof(t));
		    return fun(str,n);
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends