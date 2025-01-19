func _max(arr []int) int {
    res := arr[0]
    for i := range arr {
        res = max(res, arr[i])
    }
    return res
}

func ok(mid int, p []int) int {
    res := 0
    for i := range p {
        res += int(math.Ceil(float64(p[i])/float64(mid)))
    }
    return res
}

func minEatingSpeed(p []int, h int) int {
    maxi := _max(p)
    l, r := 0, maxi
    ans := maxi

    for l <= r {
        mid := l + (r - l) / 2
        if ok(mid, p) <= h {
            ans = mid
            r = mid - 1
        } else {
            l = mid + 1
        }
    }
    
    return ans
}