"""
https://www.hackerrank.com/challenges/find-digits
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
        int t=sc.nextInt();

        for(int i=0;i<t;i++)
        {
        String s1=sc.next();
        char[] c= s1.toCharArray();
        int no=Integer.parseInt(s1);    
            int l=0;
            for(int j=0;j<s1.length();j++)
            {
                int num = Integer.parseInt(String.valueOf(c[j]));  
                if(num>0)              
                if(no%num==0)
                l++;
            }
            System.out.println(l);
        }
    }
}
