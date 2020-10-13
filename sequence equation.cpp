"""
https://www.hackerrank.com/challenges/permutation-equation/problem
"""
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,l=1;
    cin>>n;
    int a[n],b[n];
    for(i=1;i<=n;i++)
    cin>>a[i];
    for(i=1;i<=n;i++)
    {
           for(j=1;j<=n;j++)
           { 
            if(l==a[j])
            {
                for(int k=1;k<=n;k++)
                {
                    if(j==a[k])
                    cout<<k<<"\n";
                }
            }
           }
          l++;
    }
}
