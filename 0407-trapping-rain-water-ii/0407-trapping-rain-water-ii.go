type cell struct {
	height int
	x      int
	y      int
}

type PriorityQueue []cell

func (pq PriorityQueue) Len() int            { return len(pq) }
func (pq PriorityQueue) Less(i, j int) bool  { return pq[i].height < pq[j].height }
func (pq PriorityQueue) Swap(i, j int)       { pq[i], pq[j] = pq[j], pq[i] }
func (pq *PriorityQueue) Push(x interface{}) { *pq = append(*pq, x.(cell)) }
func (pq *PriorityQueue) Pop() interface{} {
	old := *pq
	n := len(old)
	item := old[n-1]
	*pq = old[0 : n-1]
	return item
}

func trapRainWater(hm [][]int) int {
	n := len(hm)

	if n < 3 {
		return 0
	}

	m := len(hm[0])

	if m < 3 {
		return 0
	}

	pq := &PriorityQueue{}
	heap.Init(pq)

	vis := make([][]bool, n)
	for i := range vis {
		vis[i] = make([]bool, m)
	}

	for i := 0; i < n; i++ {
		for j := 0; j < m; j++ {
			if i == 0 || i == n-1 || j == 0 || j == m-1 {
				heap.Push(pq, cell{hm[i][j], i, j})
				vis[i][j] = true
			}
		}
	}

	dx := []int{0, 0, 1, -1}
	dy := []int{1, -1, 0, 0}

	ans := 0

	for pq.Len() > 0 {
		c := heap.Pop(pq).(cell)
		for i := 0; i < 4; i++ {
			nx, ny := c.x+dx[i], c.y+dy[i]
			if nx < 0 || ny < 0 || nx >= n || ny >= m || vis[nx][ny] {
				continue
			}
			ans += max(0, c.height-hm[nx][ny])
			heap.Push(pq, cell{max(c.height, hm[nx][ny]), nx, ny})
			vis[nx][ny] = true
		}
	}

	return ans
}