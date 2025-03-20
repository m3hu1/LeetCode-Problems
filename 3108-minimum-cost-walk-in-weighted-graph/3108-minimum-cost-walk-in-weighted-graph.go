func find(node int, papa []int) int {
    if papa[node] < 0 {
        return node
    }
    papa[node] = find(papa[node], papa)
    return papa[node
}

func minimumCost(n int, es [][]int, query [][]int) []int {
    papa := make([]int, n)
    mc := make([]int, n)
    for i := range papa {
        papa[i] = -1
        mc[i] = -1
    }

    for _, e := range es {
        ur, vr := find(e[0], papa), find(e[1], papa)
        if ur != vr {
            mc[ur] &= mc[vr]
            papa[vr] = ur
        }
        mc[ur] &= e[2]
    }

    ans := make([]int, len(query))

    for i, q := range query {
        ur, vr := find(q[0], papa), find(q[1], papa)
        if q[0] == q[1] {
            ans[i] = 0
        } else if ur != vr {
            ans[i] = -1
        } else {
            ans[i] = mc[ur]
        }
    }

    return ans
}