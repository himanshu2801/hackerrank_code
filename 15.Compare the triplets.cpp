"""
Link of the question...
https://www.hackerrank.com/challenges/compare-the-triplets/problem
Solution...
"""
#include<stdio.h>
int main()
{
    int a[3],b[3],l=0,m=0,i;
    for(i=0;i<3;i++)
    scanf("%d",&a[i]);
    for(i=0;i<3;i++)
    scanf("%d",&b[i]);
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        l++;
        else if(b[i]>a[i])
        m++;
    }
    printf("%d %d",l,m);
    return 0;
}

