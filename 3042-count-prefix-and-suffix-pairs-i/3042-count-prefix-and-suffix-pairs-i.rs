impl Solution {
    pub fn count_prefix_suffix_pairs(words: Vec<String>) -> i32 {
        let mut ans = 0;

        fn check(str1: &str, str2: &str) -> bool {
            str2.starts_with(str1) && str2.ends_with(str1)
        }

        for i in 0..words.len() {
            for j in i + 1..words.len() {
                if check(&words[i], &words[j]) {
                    ans += 1;
                }
            }
        }

        ans
    }
}