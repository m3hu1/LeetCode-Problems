func countGood(nums []int, k int) int64 {
	var t, tot int64 = 0, 0
	vis := make(map[int]int)
	n := int64(len(nums))
	j := 0

	for i := 0; i < len(nums); i++ {
		vis[nums[i]]++
		t += int64(vis[nums[i]] - 1)
		for j < i && t > int64(k-1) {
			t -= int64(vis[nums[j]] - 1)
			vis[nums[j]]--
			j++
		}
		tot += int64(i - j + 1)
	}

	return n*(n+1)/2 - tot
}