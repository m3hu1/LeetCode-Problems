func countDays(days int, ms [][]int) int {
    sort.Slice(ms, func(i, j int) bool {
       return ms[i][0] < ms[j][0]
    })

    maxi := ms[0][1]
    bw := 0

    for i := 1; i < len(ms); i++ {
        bw += max(ms[i][0] - maxi - 1, 0)
        maxi = max(maxi, ms[i][1])
    }

    a, b := days - maxi, ms[0][0] - 1
    return b + a + bw
}