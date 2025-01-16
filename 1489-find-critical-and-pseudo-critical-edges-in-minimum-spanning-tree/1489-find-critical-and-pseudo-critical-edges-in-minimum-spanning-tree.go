type UnionFind struct {
	comp int
	root []int
}

func fn(n int) *UnionFind {
	uf := &UnionFind{
		comp: n,
		root: make([]int, n),
	}
	for i := 0; i < n; i++ {
		uf.root[i] = i
	}
	return uf
}

func (uf *UnionFind) find(v int) int {
	if uf.root[v] == v {
		return v
	}
	uf.root[v] = uf.find(uf.root[v])
	return uf.root[v]
}

func (uf *UnionFind) union(v1, v2 int) bool {
	r1 := uf.find(v1)
	r2 := uf.find(v2)
	if r1 == r2 {
		return false
	}
	uf.root[r1] = r2
	uf.comp--
	return true
}

func MST(n int, e [][]int, inc, ex []int) int {
	cost := 0
	uf := fn(n)

	if inc != nil {
		uf.union(inc[0], inc[1])
		cost += inc[2]
	}

	for _, edge := range e {
		if ex != nil && edge[0] == ex[0] && edge[1] == ex[1] && edge[2] == ex[2] {
			continue
		}
		if uf.union(edge[0], edge[1]) {
			cost += edge[2]
		}
	}

	if uf.comp > 1 {
		return math.MaxInt
	}

	return cost
}

func findCriticalAndPseudoCriticalEdges(n int, e [][]int) [][]int {
	mp := make(map[[3]int]int)
	for i, edge := range e {
		mp[[3]int{edge[0], edge[1], edge[2]}] = i
	}

	sort.Slice(e, func(i, j int) bool {
		return e[i][2] < e[j][2]
	})

	mc := MST(n, e, nil, nil)

	ce := []int{}
	pce := []int{}

	for _, edge := range e {
		exCost := MST(n, e, nil, edge)
		if exCost > mc {
			ce = append(ce, mp[[3]int{edge[0], edge[1], edge[2]}])
		} else {
			incCost := MST(n, e, edge, nil)
			if incCost == mc {
				pce = append(pce, mp[[3]int{edge[0], edge[1], edge[2]}])
			}
		}
	}

	return [][]int{ce, pce}
}