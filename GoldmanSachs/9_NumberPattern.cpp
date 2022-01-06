// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string s){
        // code here 
        int i=0;
        int curr_max=0;
        int last_entry=0;
        string res="";
        int n=s.length();
        for(i=0;i<n;i++)
        {
            int d=0;
            switch(s[i])
            {
                case 'I':
                {
                    int j=i+1;
                    while(j<n && s[j]=='D')
                    {
                        d++;
                        j++;
                    }
                    if(i==0)
                    {
                        curr_max=curr_max+d+2;
                        res+=to_string(++last_entry);
                        res+=to_string(curr_max);
                        last_entry=curr_max;
                    }
                    else
                    {
                        curr_max=curr_max+d+1;
                        res+=to_string(curr_max);
                        last_entry=curr_max;
                    }
                    for(int k=0;k<d;k++,i++)
                    {
                        res+=to_string(--last_entry);
                    }
                }   
                break;
                
                case 'D':
                {
                    if(i==0)
                    {
                        int j=i+1;
                        while(j<n && s[j]=='D')
                        {
                            d++;
                            j++;
                        }
                        curr_max=curr_max+d+2;
                        res+=to_string(curr_max);
                        res+=to_string(curr_max-1);
                        last_entry=curr_max-1;
                    }
                    else
                    {
                        res+=to_string(--last_entry);
                    }
                break;
                }
            }
        }
        return res;
        
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends