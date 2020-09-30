"""
https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
"""
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;
import java.lang.*;

public class Solution {


    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
       int i=sc.nextInt();
       int j=sc.nextInt();
       int k=sc.nextInt();
       int l=0;
       for(int z=i;z<=j;z++)
       {
           int r=0,rev=0,temp=z,div=0;
           while(temp!=0)    
          {    
     r=temp%10;      
     rev=rev*10+r;    
     temp/=10;    
          } 
  if((rev-z)%k==0)
  l++;
       }
       System.out.print(l);
    }
}
