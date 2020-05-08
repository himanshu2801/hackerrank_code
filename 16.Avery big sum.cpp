"""
Link of the question...
https://www.hackerrank.com/challenges/a-very-big-sum/problem
Solution...
"""
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum;
}
