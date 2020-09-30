"""
https://www.hackerrank.com/challenges/the-hurdle-race/problem
"""
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,*ptr,*max,l,i;
    cin>>a;
    cin>>b;
    ptr=new int[a];
    for(i=0;i<a;i++)
    cin>>*(ptr+i);
    max=std::max_element(ptr,(ptr+a));
    if(b>*max)
    l=0;
    else
    l=*max-b;
    cout<<l;
    delete []ptr;
    return 0;

}
