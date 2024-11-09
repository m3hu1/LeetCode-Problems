impl Solution {
    pub fn count_points(ps: Vec<Vec<i32>>, qs: Vec<Vec<i32>>) -> Vec<i32> {
        let mut ans = vec![];

        for q in &qs {
            let x = q[0];
            let y = q[1];
            let r = q[2];
            let mut cnt = 0;
            for p in &ps {
                let x1 = p[0];
                let y1 = p[1];
                if (x1 - x).pow(2) + (y1 - y).pow(2) <= r.pow(2) {
                    cnt += 1;
                }
            }
            ans.push(cnt);
        }

        ans
    }
}