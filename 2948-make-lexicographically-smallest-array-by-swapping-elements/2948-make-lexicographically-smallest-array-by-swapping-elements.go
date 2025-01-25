func lexicographicallySmallestArray(nums []int, limit int) []int {
	type Deque struct {
		data []int
	}

	popFront := func(d *Deque) int {
		val := d.data[0]
		d.data = d.data[1:]
		return val
	}

	snums := append([]int{}, nums...)
	sort.Ints(snums)

	d := make(map[int]*Deque)
	prev := -1 << 31

	for _, n := range snums {
		if prev != -1<<31 && n-prev <= limit {
			d[prev].data = append(d[prev].data, n)
			d[n] = d[prev]
		} else {
			d[n] = &Deque{data: []int{n}}
		}
		prev = n
	}

	ans := make([]int, len(nums))

	for i, n := range nums {
		ans[i] = popFront(d[n])
	}

	return ans
}