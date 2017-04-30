import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        //System.out.println(T);
        for(int j=0;j<T;j++){
        String b = sc.next();
        //System.out.println(b);
        int del = 0;
        for(int i=0;i<=b.length()-2;i++){
            if(b.charAt(i) == b.charAt(i+1))
                del++;
        }
            System.out.println(del);    
        }}
    
}
