"""
https://www.hackerrank.com/challenges/the-birthday-bar/problem
"""
#include<iostream>
using namespace std;
int main()
{
    int *ptr,n,m,d,i,sum1=0,j,p=0;
    cin>>n;
    ptr=new int [n];
    for(i=0;i<n;i++)
    cin>>*(ptr+i);
    cin>>d>>m;
    for(i=0;i<n;i++){
    for(j=i;j<m+i;j++)
    {
        sum1=sum1+*(ptr+j);
    }
    if(sum1==d)
    p++;
    sum1=0;
    }
    cout<<p;
   // delete ptr[];
    return 0;
}
