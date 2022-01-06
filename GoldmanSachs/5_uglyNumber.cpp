#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
# define ull unsigned long long
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    set<ull> s;
	    s.insert(1);
	    ull num;
	    while(n--)
	    {
	        auto it=s.begin();
	        num=*it;
	        s.insert(num*2);
	        s.insert(num*3);
	        s.insert(num*5);
	        s.erase(it);
	    }
	    return num;
	}
};