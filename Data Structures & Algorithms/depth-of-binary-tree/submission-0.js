/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     constructor(val = 0, left = null, right = null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */

class Solution {
    /**
     * @param {TreeNode} root
     * @return {number}
     */
    maxDepth(root) {
        if(!root) return 0;
         let leftH = this.maxDepth(root.left);
         let rightR = this.maxDepth(root.right);
         let maxi = Math.max(leftH,rightR);
         console.log(maxi);
         return maxi+1;
    }
}
