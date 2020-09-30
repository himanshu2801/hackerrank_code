"""
https://www.hackerrank.com/challenges/apple-and-orange/problem
"""
#include<iostream>
using namespace std;
int main()
{
    int a,b,s,t,*ptr,*ptr1,m,n,l=0,k=0,i;
    cin>>a;
    cin>>b;
    cin>>m;
    cin>>n;
    cin>>s;
    cin>>t;
    ptr=new int [s];
    ptr1=new int [t];
    for(i=0;i<s;i++)
    cin>>*(ptr+i);
    for(i=0;i<t;i++)
    cin>>*(ptr1+i);
    for(i=0;i<s;i++)
    {
        *(ptr+i)=m+*(ptr+i);
        if(a<=*(ptr+i) && b>=*(ptr+i))
        l++;
    }
    for(i=0;i<t;i++)
    {
        *(ptr1+i)=n+*(ptr1+i);
        if(a<=*(ptr1+i) && b>=*(ptr1+i))
        k++;
    }
    cout<<l<<endl<<k;
    delete []ptr;
    delete []ptr1;
    return 0;
}
