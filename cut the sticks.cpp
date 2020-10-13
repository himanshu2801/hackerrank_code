"""
https://www.hackerrank.com/challenges/cut-the-sticks/problem
"""
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,count=0,l=0,b[1000];
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    std::sort(a,a+n);
    
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            int temp=a[i];
            for(int j=i;j<n;j++)
            {
                a[j]=a[j]-temp;
                count++;
            }
            b[l]=count;
            count=0;
            l++;
        }
    }
    for(i=0;i<l;i++)
    cout<<b[i]<<endl;
}
