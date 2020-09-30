"""
https://www.hackerrank.com/challenges/mini-max-sum/problem
"""
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int a[100],sum[100];
    int i,l=0,j;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        sum[l]=0;
        for(j=0;j<5;j++)
        {
            if(i!=j)
            sum[l]=sum[l]+a[j];
        }
        l++;
    }
    long long int *c,*p;
    c=std::max_element(sum,sum+5);
    p=std::min_element(sum,sum+5);
    cout<<*p;
    cout<<" "<<*c;

}
