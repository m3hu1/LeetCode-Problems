func check(mid int, candies []int, k int64) bool {
    cnt := int64(0)
    for _, candy := range candies {
        cnt += int64(candy / mid)
        if cnt >= k {
            return true
        }
    }
    return false
}

func maximumCandie(candies []int, k int64) int {
    l, r := 1, 0

    for _, candy := range candies {
        r = max(candy, r)
    }

    ans := 0

    for l <= r {
        mid := (l+r) >> 1
        if check(mid, candies, k) {
            ans = mid
            l = mid+1
        } else {
            r = mid-1
        }
    }

    return ans
}