type long = int64

func gridGame(grid [][]int) long {
    p, x := long(0), long(0)

    for i := 0; i < len(grid[0]); i++ {
        p += long(grid[0][i])
    }

    ans := long(^uint64(0) >> 1)

    for i := 0; i < len(grid[0]); i++ {
        p -= long(grid[0][i])
        if p > x {
            ans = min(ans, p)
        } else {
            ans = min(ans, x)
        }
        x += long(grid[1][i])
    }

    return ans
}