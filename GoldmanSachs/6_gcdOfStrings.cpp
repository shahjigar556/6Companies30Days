#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // bool fun(string x,string y)
    // {
    //     int i=0;
    //     int j=0;
    //     bool pass=true;
    //     while(pass && i<x.length())
    //     {
    //         for(j=0;j<y.length();j++,i++)
    //         {
    //             if(x[i]!=y[j]){
    //                 pass=false;
    //                 break;
    //             }
    //         }
    //     }
    //     return pass;
    // }
    string gcdOfStrings(string str1, string str2) {
        // string x="";
        // int i,j;
        // i=j=0;
        // string ans="";
        // while(i<str1.length() && j<str2.length())
        // {
        //     if(str1[i]!=str2[j])
        //     {
        //         break;
        //     }
        //     x+=str1[i];
        //     if(fun(str1,x) && fun(str2,x)){
        //         ans=x;
        //     }
        //     i++;
        //     j++;
        // }
        // return ans;
        return str1+str2==str2+str1?str1.substr(0,gcd(str1.length(),str2.length())):"";
    }
};