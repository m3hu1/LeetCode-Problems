func findNumbers(nums []int) int {
    ans := 0

    for _, num := range nums {
        numDigits := int(math.Log10(float64(num))) + 1 
        if numDigits % 2 == 0 { ans++ }
    }

    return ans
}