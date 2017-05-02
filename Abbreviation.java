import java.util.*;
import java.io.*;

public class Solution{
    public static void main(String [] args){Scanner sc = new Scanner(System.in);
		int testCases = sc.nextInt();
		for (int t = 0; t < testCases; ++t) {
			String a = sc.next();
			String b = sc.next();
			
			
			boolean[][] dp = new boolean[a.length()+1][b.length()+1];

			//Base case. If string b is empty, automatically match.
			for (int i = 0; i <= a.length(); ++i) {
				dp[i][0] = true; 
			}
			
			for (int i = 1; i <= a.length(); ++i) {
				for (int j = 1; j <= b.length() && j <= i; ++j) {
					if (Character.isLowerCase(a.charAt(i-1))) {
						dp[i][j] = dp[i-1][j] || (Character.toUpperCase(a.charAt(i-1)) == b.charAt(j-1) && dp[i-1][j-1]);
					} else {
						dp[i][j] = a.charAt(i-1) == b.charAt(j-1) && dp[i-1][j-1];
					}
				}
			}
			
			System.out.println(dp[a.length()][b.length()] == true ? "YES" : "NO");
		}
		
		sc.close();
                                           }}
