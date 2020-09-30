"""
https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
"""
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int q=sc.nextInt();
        for(int i=0;i<q;i++)
        {
        int x=sc.nextInt();
        int y=sc.nextInt();
        int c=sc.nextInt();
        int catA=0,catB=0;
        if(x>c)
        catA=x-c;
        else
        catA=c-x;
        if(y>c)
        catB=y-c;
        else
        catB=c-y;
        if(catA==catB)
        System.out.println("Mouse C");
        else if(catA>catB)
        System.out.println("Cat B");
        else
        System.out.println("Cat A");
        }
    }
}
