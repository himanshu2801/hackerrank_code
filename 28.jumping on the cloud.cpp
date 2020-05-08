"""
Link of the Question...
hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem
Solution...
"""
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,e=100;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<10000;i=i+k)
    {
        int n1=(i+k)%n;
        if(n1!=0)
        e=e-1-2*a[n1];
        else
        {
        e=e-1-2*a[n1];
        break;
        }
    }
    cout<<e;
}
