func numOfSubarrays(arr []int) int {
    var count int = 0
    var prefixSum int = 0
    var mod int = 1e9 + 7
    var even, odd int = 1, 0

    for _, num := range arr {
        prefixSum += num
        if prefixSum & 1 == 1 {
            odd++
            count += even
        } else {
            even++
            count += odd
        }
        count %= mod
    }

    return count
}