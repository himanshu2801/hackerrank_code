"""
https://www.hackerrank.com/challenges/taum-and-bday
"""


#include <bits/stdc++.h>

using namespace std;

int main()
{
    long i,b,w,bc,wc,t,z;
    cin>>t;
    for(i=0;i<t;i++)
    {
     cin>>b>>w;
     cin>>bc>>wc>>z;
     if(bc>wc)
     {
         if(bc>wc+z)
            bc=wc+z;
     }
         else if(wc>bc)
         {
             if(wc>bc+z)
                wc=bc+z;
         }
long d=b*bc+w*wc;
cout<<d<<endl;
    }
return 0;
}
