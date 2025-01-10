func wordSubsets(words1 []string, words2 []string) []string {
    word2Count := make([]int, 26)
    for _, word2 := range words2 {
        wordCount := countWord(word2)
        for i := 0; i < 26; i++ {
            if word2Count[i] < wordCount[i] {
                word2Count[i] = wordCount[i]
            }
        }
    }
    var result []string
    for _, word1 := range words1 {
        wordCount := countWord(word1)
        isSubset := true
        for i := 0; i < 26; i++ {
            if word2Count[i] > wordCount[i] {
                isSubset = false
            }
        }
        if isSubset {
            result = append(result, word1)
        }
    }
    return result
}

func countWord(word string) []int {
    wordCount := make([]int, 26)
    for i := 0; i < len(word); i++ {
        wordCount[word[i] - 97]++
    }
    return wordCount
}