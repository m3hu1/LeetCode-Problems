func smallestNumber(p string) string {
	ans, nums:= "", make([]int, 0)

	for i := 0; i <= len(p); i++ {
		nums = append(nums, i + 1)
		if i == len(p) || p[i] == 'I' {
			for len(nums) > 0 {
                ans += strconv.Itoa(nums[len(nums)-1])
				nums = nums[:len(nums) - 1]
			}
		}
	}

	return ans
}