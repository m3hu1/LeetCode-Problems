func queryResults(limit int, qs [][]int) []int {
    mp1, mp2 := make(map[int]int), make(map[int]int)
    ans := []int{}

    for _, q := range qs {
        ball := q[0]
        colorToPaint := q[1]
        preColor, ok := mp2[ball]
        if ok {
            mp2[ball] = colorToPaint
            mp1[preColor]--
            if mp1[preColor] == 0 {
                delete(mp1, preColor)
            }
        }else {
            mp2[ball] = colorToPaint
        }
        mp1[colorToPaint] ++
        ans = append(ans, len(mp1))
    }

    return ans
}