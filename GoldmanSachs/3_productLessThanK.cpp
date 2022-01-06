class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long int p=1;
        int start=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            p*=a[i];
            if(a[i]>=k)
            {
                start=i+1; // new start
                p=1;
                continue;
            }
            while(start<i && p>=k)
            {
                p/=a[start];
                start++;
            }
            //cout<<"start="<<start<<" end="<<i<<endl;
            cnt+=i-start+1;
        }
        return cnt;
        // Brute force
        // int i,j;
        // long long int p=1;
        // int cnt=0;
        // for(i=0;i<n;i++)
        // {
        //     if(a[i]>=k)
        //     {
        //         continue;
        //     }
        //     p=a[i];
        //     cnt+=1;
        //     for(j=i+1;j<n;j++)
        //     {
        //         p*=a[j];
        //         if(p>=k)
        //         {
        //             break;
        //         }
        //         cnt+=1;
        //     }
        // }
        // return cnt;
    }
};