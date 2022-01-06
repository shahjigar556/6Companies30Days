#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

string encode(string src)
{     
  //Your code here 
  int cnt=1;
  char ch=src[0];
  string ans="";
  for(int i=1;i<src.length();i++)
  {
      if(ch==src[i])
      {
          cnt+=1;
      }
      else
      {
          ans+=ch;
          ans+=to_string(cnt);
          ch=src[i];
          cnt=1;
      }
  }
  ans+=ch;
  ans+=to_string(cnt);
  return ans;
} 