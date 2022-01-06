#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue <int, vector<int>, greater<int>> pq;
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(pq.size()<10)
        {
            pq.push(arr[i]);
        }
        else
        {
            int val=arr[i];
            if(val>pq.top())
            {
                pq.pop();
                pq.push(val);
            }
        }
    }
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}