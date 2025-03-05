func coloredCells(n int) int64 {
    var ans int64
    ans = 1

    var x int64
    x = 4

    for n - 1 > 0 {
        n--
        ans += x
        x += 4
    }

    return ans
}