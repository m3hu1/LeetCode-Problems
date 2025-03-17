func divideArray(nums []int) bool {
    mp := make(map[int]int)

    for _, num := range nums {
        mp[num]++
    }

    for _, val := range mp {
        if val & 1 == 1 {
            return false
        }
    }

    return true
}