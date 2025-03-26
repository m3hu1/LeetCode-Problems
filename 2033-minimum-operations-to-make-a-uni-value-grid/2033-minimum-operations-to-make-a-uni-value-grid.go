func minOperations(grid [][]int, x int) int {
	var arr []int
	for _, row := range grid {
		for _, num := range row {
			arr = append(arr, num)
		}
	}

	sort.Ints(arr)
	m := arr[len(arr)/2]
	ans := 0

	for _, num := range arr {
		d := int(math.Abs(float64(num - m)))
		if d%x != 0 {
			return -1
		}
		ans += d / x
	}

	return ans
}