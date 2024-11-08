impl Solution {
    pub fn stone_game_vi(alicev: Vec<i32>, bobv: Vec<i32>) -> i32 {
        let mut ans = 0;
        // let SUM = bobv.iter().sum::<i32>(); // another way to get the sum of arr
        let SUM: i32 = bobv.iter().sum(); // remember this for getting the sum of arr in rust; gotta declare the type --> in this case, i32
        let mut nums = vec![0; alicev.len()];

        for i in 0..alicev.len() {
            nums[i] = alicev[i] + bobv[i];
        }

        nums.sort_by(|a, b| b.cmp(a)); // sorting in reverse order; remember this for sorting in reverse in rust

        for i in (0..alicev.len()).step_by(2) { // remember step_by
            ans += nums[i];
        }

        if ans == SUM {
            return 0;
        }
        else if ans > SUM {
            return 1;
        }
        return -1;
    }
}