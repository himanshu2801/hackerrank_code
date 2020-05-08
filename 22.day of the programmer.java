"""
Link of the Question...
https://www.hackerrank.com/challenges/day-of-the-programmer/problem
Solution...
"""
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

public class Solution {
    public static void main(String[] args) {
        int date=0;
        Scanner sc=new Scanner(System.in);
        int year=sc.nextInt();
        if(year!=1918)
        {
            if(year<1918)
            {
            if(year%4==0)
            {
            date=256-244;
            String str=Integer.toString(date);
            String month="09";
            String str2=Integer.toString(year);
            System.out.print(str+"."+month+"."+str2);
            }
            else
            {
                  date=256-243;
            String str=Integer.toString(date);
            String month="09";
            String str2=Integer.toString(year);
            System.out.print(str+"."+month+"."+str2);
            }
            }
            else if(year>1918)
            {
                if((year%4==0 && year%100!=0) || (year%400==0))
                {
                  date=256-244;
            String str=Integer.toString(date);
            String month="09";
            String str2=Integer.toString(year);
            System.out.print(str+"."+month+"."+str2);
            }
            else
            {
                  date=256-243;
            String str=Integer.toString(date);
            String month="09";
            String str2=Integer.toString(year);
            System.out.print(str+"."+month+"."+str2);
            }
            }
        }
            else
            {
                  date=256-230;
            String str=Integer.toString(date);
            String month="09";
            String str2=Integer.toString(year);
            System.out.print(str+"."+month+"."+str2);
            }
        }
    
}
