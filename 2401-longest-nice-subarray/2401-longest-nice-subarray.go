func longestNiceSubarray(nums []int) int {
    var ans int
    ans = 1

	for l, r, o := 0, 0, 0; r < len(nums); {
		if o & nums[r] == 0 {
			o |= nums[r]
			curr := r - l + 1
			if curr > ans {
				ans = curr
			}
			r++
		} else {
			o ^= nums[l]
			l++
		}
	}

	return ans
}