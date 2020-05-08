"""
Link of the question...
https://www.hackerrank.com/challenges/migratory-birds/problem
Solution...
"""
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,*ptr,n,j,q;
    int s[5]={1,2,3,4,5},s1[50];
    cin>>n;
    ptr=new int [n];
    for(i=0;i<n;i++)
    cin>>*(ptr+i);
    for(i=0;i<5;i++)
    {
        s1[i]=0;
        for(j=0;j<n;j++)
        {
            if(s[i]==*(ptr+j))
            s1[i]++;
        }
    }
    int max=s1[0];
    for(i=0;i<5;i++)
        if(max<s1[i])
    {
        max=s1[i];
         q=i;
    }
    cout<<s[q];
    delete []ptr;
    return 0;
}
