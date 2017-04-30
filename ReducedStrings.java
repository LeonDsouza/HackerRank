import java.io.*;
import java.util.*;
import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        Pattern pattern = Pattern.compile("(\\w)\\1");
        do {
            Matcher m = pattern.matcher(s1);
            if (m.find()) {
                s1 = s1.replace(m.group(), "");
            } else {
                break;
            }
        } while (s1.length() > 3);
        Matcher m = pattern.matcher(s1);
        if (m.find()) {
            s1 = s1.replace(m.group(), "");
        }
        if (s1.length() > 0) {
            System.out.print(s1);
        } else {
            System.out.print("Empty String");
        }
    }
}
