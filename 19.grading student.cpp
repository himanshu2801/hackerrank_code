"""
Link of the Question...
https://www.hackerrank.com/challenges/grading/problem
Solution...
"""
#include<iostream>
using namespace std;
int main()
{
    int n,*ptr,i;
    cin>>n;
    ptr=new int[n];
    for(i=0;i<n;i++)
    cin>>*(ptr+i);
    for(i=0;i<n;i++)
    {
        if(*(ptr+i)>=38)
        {
            if(*(ptr+i)%5>=3)
            {
                if(*(ptr+i)%5==3)
                *(ptr+i)=*(ptr+i)+2;
                else if(*(ptr+i)%5==4)
                *(ptr+i)=*(ptr+i)+1;
            }
        }
    }
    for(i=0;i<n;i++)
    cout<<*(ptr+i)<<endl;
    delete []ptr;
    return 0;
}
