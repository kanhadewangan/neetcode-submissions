/**
 * Definition for singly-linked list.
 * class ListNode {
 *     constructor(val = 0, next = null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */

class Solution {
    /**
     * @param {ListNode} head
     * @return {ListNode}
     */
    reverseList(head) {
         let slow = null ;
    let fast = head ;
    let prev = null ;
    while(fast !== null){
        fast = fast.next ;
        head.next = prev ;
        prev = head ;
        head = fast ;
    }
    return prev ;
    }
}
