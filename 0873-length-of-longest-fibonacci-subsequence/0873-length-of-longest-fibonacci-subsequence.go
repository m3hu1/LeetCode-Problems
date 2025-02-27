func lenLongestFibSubseq(arr []int) int {
    var maxi int = 0
    var n int = len(arr)

	dp := make([][]int, n)
	for i := range dp {
		dp[i] = make([]int, n)
	}

	valToIdx := make(map[int]int)
	for idx, num := range arr {
		valToIdx[num] = idx
	}

	for curr := 0; curr < n; curr++ {
		for prev := 0; prev < curr; prev++ {
			diff := arr[curr] - arr[prev]
			prevIdx, exists := valToIdx[diff]

			if exists && diff < arr[prev] {
				dp[prev][curr] = dp[prevIdx][prev] + 1
			} else {
				dp[prev][curr] = 2
			}

			if dp[prev][curr] > maxi {
				maxi = dp[prev][curr]
			}
		}
	}

	if maxi > 2 {
		return maxi
	}
	return 0
}