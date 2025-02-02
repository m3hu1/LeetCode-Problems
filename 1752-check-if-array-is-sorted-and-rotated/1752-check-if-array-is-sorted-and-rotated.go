func check(nums []int) bool {
    d := 0

	for i, num := range nums {
		if num > nums[(i + 1) % len(nums)] {
			d++
		}
		if d > 1 {
			return false
		}
	}
    
	return true
}