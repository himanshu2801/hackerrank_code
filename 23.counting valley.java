"""
Link of the Question...
https://www.hackerrank.com/challenges/counting-valleys/problem
Solution...
"""
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x=sc.nextInt();
        String s = sc.next();
        int l= 0;
        int v = 0;
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) == 'U')
                l++;
            else if(s.charAt(i) == 'D')
            {
                if(l == 0)
                {
                    v++;
                }
                l--;
            }
        }
        System.out.println(v);
    }
}
