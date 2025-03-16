func repairCars(rs []int, cars int) int64 {
    var low, high int64 = 0, math.MaxInt

    for low < high {
        mid := (low + high) / 2
        x := 0
        for _, r := range rs {
            x += int(math.Sqrt(float64(mid/int64(r))))
        }
        if x < cars {
            low = mid + 1
        } else {
            high = mid
        }
    }

    return low
}