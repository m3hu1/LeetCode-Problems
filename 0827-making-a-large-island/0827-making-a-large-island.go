func gc(grid [][]int, i, j int) int{
    if i < 0 || j < 0 || i >= len(grid) || j >= len(grid[i]){
        return 0
    }
    return grid[i][j]
}

func ga(grid [][]int, i, j int, c int) int{
    if i < 0 || j < 0 || i >= len(grid) || j >= len(grid[i]) || grid[i][j] != 1{
        return 0
    }
    grid[i][j] = c
    return 1 + ga(grid, i+1, j, c) + ga(grid, i-1, j, c) + ga(grid, i, j+1, c) + ga(grid, i, j-1, c)
}

func largestIsland(grid [][]int) int {
    arr, n := make(map[int]int), len(grid)
    c, ans := 1, 0
    
    for i := 0; i < n; i++{
        for j := 0; j < n; j++{
            if grid[i][j] == 1{
                c++
                arr[c] = ga(grid, i, j, c)
                ans = max(ans, arr[c])
            }
        }
    }

    for i := 0; i < n; i++{
        for j := 0; j < n; j++{
            if grid[i][j] == 0{
                a := 1
                x := make(map[int]int)
                x[gc(grid, i - 1, j)] = 1
                x[gc(grid, i + 1, j)] = 1
                x[gc(grid, i, j - 1)] = 1
                x[gc(grid, i, j + 1)] = 1
                for k := range x{
                    a += arr[k]
                }
                ans = max(ans, a)
            }
        }
    }

    return ans
}