func minZeroArray(nums []int, queries [][]int) int {
    var ans, sum int
    ans, sum = 0, 0
	d := make([]int, len(nums)+1)

	for i := 0; i < len(nums); i++ {
		for (sum + d[i]) < nums[i] {
			ans++
			if ans > len(queries) {
				return -1
			}
			l, r, x := queries[ans-1][0], queries[ans-1][1], queries[ans-1][2]
			if r >= i {
				d[max(l, i)] += x
				d[r+1] -= x
			}
		}
		sum += d[i]
	}

	return ans
}