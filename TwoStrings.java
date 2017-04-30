import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt(), j = 1;
        sc.nextLine();
        while (j <= T) {
            String s1 = sc.nextLine();
            String s2 = sc.nextLine();
            //System.out.println(s1 + "  "+ s2);
            boolean flag = false;
            for(int i=97;i<=122;i++){
                if(s1.indexOf(i) != -1 && s2.indexOf(i) != -1){
                    flag = true;
                    break;
                }
            }
            if(flag == true)
                System.out.println("YES");
            else
                System.out.println("NO");
            j = j+1;
        }
    }
}
