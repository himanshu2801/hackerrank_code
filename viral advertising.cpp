"""
https://www.hackerrank.com/challenges/strange-advertising/problem
"""
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,temp;
   cin>>n;
    for(i=1;i<=n;i++)
    {
       int x;
       if(i==1)
       {x=5/2;
       temp=x;}
       else
       {
       x=3*x;
       x=x/2;
       temp=temp+x;
       }        
    }
    cout<<temp;
}
