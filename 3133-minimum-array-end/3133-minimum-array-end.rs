impl Solution {
    pub fn min_end(n: i32, x: i32) -> i64 {
        let mut ans = x as i64;
        let mut pow: i64 = 1;

        while x & (pow as i32) != 0 {
            pow = pow * 2;
        }

        let mut i = 1;
        
        while i < n {
            if i & (n - 1) != 0 {
                ans += pow;
            }
            loop {
                pow *= 2;
                if x & (pow as i32) == 0 {
                    break;
                }
            }
            i *= 2;
        }
        
        ans 
    }
}