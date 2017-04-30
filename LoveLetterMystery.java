import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int i=0;i<T;i++){
            String b = sc.next();
            int j = 0;
            int k = b.length()-1;
            int count = 0;
            while(j<k){
                count += Math.abs(b.charAt(j) - b.charAt(k));
                j++;
                k--;
            }
            System.out.println(count);
        }
    }
}
