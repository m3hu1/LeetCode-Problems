/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func recoverTree(root *TreeNode)  {
    var prev, a, b *TreeNode
    var helper func(*TreeNode)

    helper = func(node *TreeNode) {
        if node == nil {
            return
        }
        helper(node.Left)
        if prev != nil {
            if node.Val < prev.Val {
                if a == nil {
                    a = prev
                }
                b = node
            }
        }
        prev = node
        helper(node.Right)
    }

    helper(root)

    a.Val, b.Val = b.Val, a.Val
}