using System;

class dp{
    static void Main(){
        int n = int.Parse(Console.ReadLine());
        int[] dp = new int[1010];
        
        dp[0] = 1;
        dp[1] = 3;
        
        for(int i = 2; i<=n; i++){
            dp[i] = (dp[i-2]*2+dp[i-1])%10007;
        }
        
        Console.WriteLine(dp[n-1]);
    }
}