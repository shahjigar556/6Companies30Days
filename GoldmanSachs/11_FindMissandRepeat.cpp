// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        unordered_map<int,bool> m;
        int rep,miss;
        int i;
        for(i=0;i<n;i++)
        {
            int x=arr[i];
            if(m[x]){
                rep=x;
            }
            m[x]=true;
        }
        for(i=1;i<=n;i++)
        {
            if(!m[i])
            {
                miss=i;
            }
        }
        int a[2];
        a[0]=rep;
        a[1]=miss;
        int *ptr=&a[0];
        return ptr;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends