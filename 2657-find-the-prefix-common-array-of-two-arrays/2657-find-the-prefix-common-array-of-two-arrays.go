func findThePrefixCommonArray(A []int, B []int) []int {
    res := make([]int, len(A))
    vis := make(map[int]bool)
    cnt := 0

    for i := 0; i < len(A); i++ {
        if vis[A[i]] {
            cnt++
        } else {
            vis[A[i]] = true
        }
        if vis[B[i]] {
            cnt++
        } else {
            vis[B[i]] = true
        }
        res[i] = cnt
    }

    return res
}