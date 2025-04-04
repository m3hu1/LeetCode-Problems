/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func lcaDeepestLeaves(root *TreeNode) *TreeNode {
	_, lca := helper(root)
	return lca
}

func helper(root *TreeNode) (int, *TreeNode) {
	if root == nil {
		return 0, nil
	}

	l, ll := helper(root.Left)
	r, rr := helper(root.Right)

	if l > r {
		return l + 1, ll
	}
	if l < r {
		return r + 1, rr
	}
	return l + 1, root
}