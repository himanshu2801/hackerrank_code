"""
Link of the Question...
https://www.hackerrank.com/challenges/sherlock-and-squares/problem
Solution...
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

    public static void main(String[] args) {

int t=sc.nextInt();
for(int i=0;i<t;i++)
{
    int a=sc.nextInt();
    int b=sc.nextInt();
    int count = (int)(Math.floor(Math.sqrt(b))- Math.ceil(Math.sqrt(a)))+1;
    System.out.println(count);
}

    }
}
