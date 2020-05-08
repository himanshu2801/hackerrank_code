"""
Link of the question...
hackerrank.com/challenges/staircase
Solution...
"""
#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   
        for(j=0;j<n;j++)
        {
            if(j<n-i-1)
            printf(" ");
            else
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

