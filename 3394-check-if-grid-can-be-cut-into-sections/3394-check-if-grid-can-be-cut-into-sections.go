type pair struct {l, r int}

func helper(x []pair) bool {
    slices.SortFunc(x, func(a, b pair) int {return a.l - b.l})
    cnt, maxi := 0, 0
    for _, p := range x {
        if p.l >= maxi { cnt++ }
        maxi = max(maxi, p.r)
    }
    return cnt >= 3
}

func checkValidCuts(n int, rs [][]int) bool {
    x, y := make([]pair, len(rs)), make([]pair, len(rs))

    for i, r := range rs {
        x[i] = pair{r[0], r[2]}
        y[i] = pair{r[1], r[3]}
    }

    return helper(x) || helper(y)
}