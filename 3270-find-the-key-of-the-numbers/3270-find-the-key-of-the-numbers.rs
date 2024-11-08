impl Solution {
    pub fn generate_key(mut a: i32, mut b: i32, mut c: i32) -> i32 {
        let mut temp = vec![0; 4];
        let mut i = 0;

        while a != 0 && b != 0 && c != 0 {
            let mut mini = std::cmp::min(std::cmp::min(a % 10, b % 10), c % 10);
            temp[i] = mini;
            a = a / 10;
            b = b / 10;
            c = c / 10;
            i += 1;
        }

        let mut ans = 0;

        for i in (0..=3).rev() {
            ans = ans * 10 + temp[i];
        }

        ans
    }
}