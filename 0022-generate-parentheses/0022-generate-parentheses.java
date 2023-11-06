class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> result = new ArrayList<>();
        generateParenthesis(result, "", 0, 0, n);
        return result;
    }
    private void generateParenthesis(List<String> result, String s, int open, int close, int n) {
        if (open == n && close == n) {
            result.add(s);
            return;
        }
        if (open < n) {
            generateParenthesis(result, s + "(", open + 1, close, n);
        }
        if (close < open) {
            generateParenthesis(result, s + ")", open, close + 1, n);
        }
    }
}