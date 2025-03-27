func minimumIndex(nums []int) int {
	ans := -1
	l, r := map[int]int{}, map[int]int{}

	for _, num := range nums {
		r[num]++
	}

	for i := 0; i < len(nums); i++ {
		l[nums[i]]++
		r[nums[i]]--
		if l[nums[i]]*2 > (i+1) && r[nums[i]]*2 > (len(nums)-i-1) {
			return i
		}
	}

	return ans
}