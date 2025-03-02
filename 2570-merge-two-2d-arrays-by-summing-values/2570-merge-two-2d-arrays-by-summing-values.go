func mergeArrays(one [][]int, two [][]int) (r [][]int) {
    mp := map[int]int{}

    for _, x := range one {
        mp[x[0]] += x[1]
    }

    for _, x := range two {
        mp[x[0]] += x[1]
    }

    for id, val := range mp {
        r = append(r, []int{id, val})
    }

    sort.Slice(r, func(i, j int) bool {
        return r[i][0] < r[j][0]
    })

	return
}