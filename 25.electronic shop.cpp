"""
Link of the question...
https://www.hackerrank.com/challenges/electronics-shop/problem\
Solution...
"""
#include<iostream>
using namespace std;
int main()
{
    int b,n,m;
    cin>>b>>n>>m;
    int a[n],c[m];
    int i,j;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<m;i++)
    cin>>c[i];
    int max=0;
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
        int temp=a[i]+c[j];
        if(temp>=max && temp<=b)
        max=temp;
    }
    if(max==0)
    cout<<"-1";
    else
    cout<<max;
}
