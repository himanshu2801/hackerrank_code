"""
https://www.hackerrank.com/challenges/angry-professor/problem
"""
#include <bits/stdc++.h>

using namespace std;



int main()
{
   int n,t,k,i,j,l=0,l1=0;
   cin>>n;
   for(i=0;i<n;i++)
   {
       l=0;
       l1=0;
       cin>>t>>k;
       int a[t];
       for(j=0;j<t;j++)
       cin>>a[j];
       for(j=0;j<t;j++)
       {
           if(a[j]<=0)
           l++;
           else
           l1++;
       }
       if(l>=k)
       cout<<"NO"<<endl;
       else
       cout<<"YES"<<endl;
   }
}

