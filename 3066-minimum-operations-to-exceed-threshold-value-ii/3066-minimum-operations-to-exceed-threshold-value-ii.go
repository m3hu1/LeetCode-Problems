type MinHeap []int

func (h MinHeap) Len() int           { return len(h) }
func (h MinHeap) Less(i, j int) bool { return h[i] < h[j] }
func (h MinHeap) Swap(i, j int)      { h[i], h[j] = h[j], h[i] }

func (h *MinHeap) Push(x interface{}) {
	*h = append(*h, x.(int))
}

func (h *MinHeap) Pop() interface{} {
	old := *h
	n := len(old)
	x := old[n-1]
	*h = old[0 : n-1]
	return x
}

func minOperations(nums []int, k int) int {
	h := &MinHeap{}
	heap.Init(h)

	for _, n := range nums {
		heap.Push(h, n)
	}

	ans := 0

	for h.Len() > 1 {
		a, b := heap.Pop(h).(int), heap.Pop(h).(int)
		if a >= k && b >= k {
			break
		}
		x := min(a, b) * 2 + max(a, b)
		heap.Push(h, x)
		ans++
	}

	return ans
}