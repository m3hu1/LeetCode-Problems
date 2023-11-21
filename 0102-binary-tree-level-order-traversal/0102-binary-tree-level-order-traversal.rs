// m3hu1
use std::rc::Rc;
use std::cell::RefCell;
impl Solution {
    pub fn level_order(root: Option<Rc<RefCell<TreeNode>>>) -> Vec<Vec<i32>> {
        let mut res: Vec<Vec<i32>> = vec![];
        let mut level = vec![root];
        let mut next_level = vec![];

        while level.len() > 0 {
            let mut level_res = vec![];
            for node in level {
                if let Some(current) = node {
                    let borrowed = current.borrow();
                    level_res.push(borrowed.val);
                    if borrowed.left != None {
                        next_level.push(borrowed.left.clone());
                    }
                    if borrowed.right != None {
                        next_level.push(borrowed.right.clone());
                    }
                }
            }
            if level_res.len() > 0 {
                res.push(level_res);
            }
            level = next_level;
            next_level = vec![];
        }
        res
    }
}