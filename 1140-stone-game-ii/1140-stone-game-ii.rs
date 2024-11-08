use std::collections::HashMap;

impl Solution {
    pub fn stone_game_ii(piles: Vec<i32>) -> i32 {
        let n = piles.len();
        let tot: i32 = piles.iter().sum();
        let mut cache = HashMap::new();

        fn helper(i: usize, m: usize, piles: &Vec<i32>, n: usize, cache: &mut HashMap<(usize, usize), i32>) -> i32 {
            if i == n {
                return 0;
            }
            if let Some(&val) = cache.get(&(i, m)) {
                return val;
            }
            let mut x = 0;
            let mut res = i32::MIN;
            for j in 1..=(2 * m) {
                if i + j > n {
                    break;
                }
                x += piles[i + j - 1];
                res = res.max(x - helper(i + j, m.max(j), piles, n, cache));
            }
            cache.insert((i, m), res);
            res
        }

        let ans = helper(0, 1, &piles, n, &mut cache);

        (tot + ans) / 2
    }
}