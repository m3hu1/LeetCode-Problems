/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {string}
 */
var tree2str = function(root) {
    if (!root) return "";

    let res = root.val.toString();

    if (root.left || root.right) {
        res += `(${tree2str(root.left)})`;
    }

    if (root.right) {
        res += `(${tree2str(root.right)})`;
    }

    return res;
};