"""
https://www.hackerrank.com/challenges/kaprekar-numbers
"""

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,p,q,temp,count1=0;
  cin>>p>>q;
 for(int i=p;i<=q;i++)
 {
      float l=0;
      long count;
      n=i;
      temp=n*n;
      count=temp;
     while(count!=0)
    {
        count=count/10;
        l++;
    }
    long div=ceil(l/2);
    long p=pow(10,div);
    long n1=temp%p;
    long n2=temp/p;
    if(n2+n1==n){
    cout<<n<<" ";
    count1++;
    }
 } 
 if(count1==0)
 cout<<"INVALID RANGE";
}
