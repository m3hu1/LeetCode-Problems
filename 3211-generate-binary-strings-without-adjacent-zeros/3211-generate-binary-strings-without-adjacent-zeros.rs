impl Solution {
    pub fn valid_strings(n: i32) -> Vec<String> {
        let mut ans = vec![];

        fn bt(curr: String, n: i32, ans: &mut Vec<String>) {
            if curr.len() == n as usize {
                ans.push(curr);
                return;
            }
            if curr.chars().last() == Some('1') {
                bt(curr.clone() + "0", n, ans);
            }
            bt(curr + "1", n, ans);
        }

        bt("1".to_string(), n, &mut ans);
        bt("0".to_string(), n, &mut ans);

        ans
    }
}