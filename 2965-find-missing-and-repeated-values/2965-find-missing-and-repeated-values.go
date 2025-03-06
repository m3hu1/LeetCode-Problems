func findMissingAndRepeatedValues(grid [][]int) []int {
    var a, b int
    a, b = -1, -1

    mp := make(map[int]int)
    for _, row := range grid {
        for _, num := range row {
            mp[num]++
        }
    }

    for i := 1; i <= len(grid) * len(grid); i++ {
        cnt, ok := mp[i]
        if !ok {
            b = i
        } else if cnt == 2 {
            a = i
        }
    }

    return []int{a, b}
}