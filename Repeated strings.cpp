"""
https://www.hackerrank.com/challenges/repeated-string/problem
"""
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n,l=0;
    char s[100];
    cin>>s;
    cin>>n;
    long int  l1=strlen(s);
        if(l1==1 && s[0]=='a')
        {
            cout<<n;
        }
        else if(l1==1 && s[0]!='a')
        {
            cout<<"0";
        }
        else{
    for(int i=0;i<l1;i++)
    if(s[i]=='a')
    l++;
    long int d=l*(n/l1);
    n=n%l1;
    for(int i=0;i<n;i++)
    if(s[i]=='a')
    d++;
    cout<<d;}
}
