// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        stack<char> x;  // to store char
        stack<int> y;   // to store num
        int i;
        string res="";
        for(i=0;i<s.length();i++)
        {
            int num=0;
            bool push=false;
            while(s[i]>='0' && s[i]<='9')
            {
                num=num*10+(s[i]-'0');
                push=true;
                i++;
            }
            if(push)
               y.push(num);
            if(s[i]=='[')
            {
                if(num==0)
                {
                    y.push(1);
                }
                x.push(s[i]);
            }
            else if(s[i]==']')
            {
               string temp="";
               while(!x.empty() && x.top()!='[')
               {
                   temp=x.top()+temp;
                   x.pop();
               }
               int cnt=y.top();
               y.pop();
               x.pop(); // pop [
               
               for(int k=0;k<cnt;k++)
               {
                   res+=temp;
               }
               for(char c:res)
               {
                   x.push(c);
               }
               res="";
            }
            else
            {
                // char
                x.push(s[i]); 
            }
        }
    
        while(!x.empty())
        {
            res=x.top()+res;
            x.pop();
        }
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends