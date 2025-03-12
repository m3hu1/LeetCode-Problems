func maximumCount(nums []int) int {
    var n, p int
    n, p = 0, 0

    for _, num := range nums {
        if num < 0 {
            n++
        } else if num > 0 {
            p++
        }
    }

    return max(n, p)
}