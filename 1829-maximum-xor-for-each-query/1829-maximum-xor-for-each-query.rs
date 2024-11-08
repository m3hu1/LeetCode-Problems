impl Solution {
    pub fn get_maximum_xor(nums: Vec<i32>, mb: i32) -> Vec<i32> {
        let mut ans = vec![0; nums.len()];
        let maxi = (1 << mb) - 1;
        let mut x = 0;

        for i in 0..nums.len() {
            x = x ^ nums[i];
            ans[nums.len() - i - 1] = x ^ maxi;
        }

        ans
    }
}