
func canPartition(nums []int) bool {
	n := len(nums)
	SUM := 0

	for _, v := range nums { SUM += v }
	if SUM%2 == 1 { return false }

	dp := make([][]bool, n+1)
    
	for i := 0; i <= n; i++ {
		dp[i] = make([]bool, SUM)
		dp[i][0] = true
	}

	for i := 1; i <= n; i++ {
		for j := 1; j <= SUM/2; j++ {
			k := nums[i-1]
			if j-k < 0 {
				dp[i][j] = dp[i-1][j]
			} else {
				dp[i][j] = dp[i-1][j-k] || dp[i-1][j]
			}
		}
	}

	return dp[n][SUM/2]
}