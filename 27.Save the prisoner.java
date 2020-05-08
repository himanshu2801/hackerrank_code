"""
Link of the Question...
https://www.hackerrank.com/challenges/save-the-prisoner/problem
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


    private static final Scanner s = new Scanner(System.in); 

    public static void main(String[] args)
    {
        int t=s.nextInt();
        for(int i=0; i<t; i++){
            int p = s.nextInt();
            int m = s.nextInt();
            int id = s.nextInt();
            if((m+id-1)%p==0)
            System.out.println(p);
            else 
            System.out.println((m+id-1)%p);
        }
    }
}
