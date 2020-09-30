"""
https://www.hackerrank.com/challenges/utopian-tree/problem
"""
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args){
        int n=sc.nextInt();
        int i=0,j=0;
        
        for(i=0;i<n;i++)
        {
            int m=sc.nextInt();
            int temp=0;
            for(j=0;j<=m;j++)
            {
                if(j==0)
                temp=1;
                else if(j%2==0)
                temp=temp+1;
                else
                temp=2*temp;
            }
            System.out.println(temp);
        }
    }
}
