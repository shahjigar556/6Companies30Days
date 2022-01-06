
#include <bits/stdc++.h>
using namespace std;

// Function to return count of squares;
long long int countSquares(int n)
{
    long long ans=0;
     while(n)
     {
         ans+=n*n;
         n--;
     }
     return ans;
}


int main()
{

int n = 8;
cout << countSquares(n);
return 0;
}
