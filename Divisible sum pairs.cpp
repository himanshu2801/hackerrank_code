"""
https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
"""
#include<iostream>
using namespace std;
int main()
{
    int *ptr,i,n,k,sum1,p=0,j;
    cin>>n>>k;
    ptr=new int [n];
    for(i=0;i<n;i++)
    cin>>*(ptr+i);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i<j))
            {
                sum1=*(ptr+i)+*(ptr+j);
                if(sum1%k==0)
                p++;
            }
        }
    }
    cout<<p;
    delete []ptr;
    return 0;



}
