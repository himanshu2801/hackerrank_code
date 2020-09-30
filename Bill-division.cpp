"""
https://www.hackerrank.com/challenges/bon-appetit/problem
"""
#include<iostream>
using namespace std;
int main()
{
int sum=0,n,k,*bill,i,num;
cin>>n;
cin>>k;
bill= new int [n];
for(i=0;i<n;i++)
cin>>*(bill+i);
cin>>num;
for(i=0;i<n;i++)
{
    if(k!=i)
    sum=sum+*(bill+i);
}
sum=sum/2;
if(sum==num)
cout<<"Bon Appetit";
else 
cout<<num-sum;
return 0;


}
