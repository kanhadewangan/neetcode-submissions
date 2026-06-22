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
     * @param {number} n
     * @return {ListNode}
     */
    removeNthFromEnd(head, n) {
    let dummyNode = new ListNode(0);
    dummyNode.next  = head;
        let slow = dummyNode; 
        let fast = dummyNode;
        for(let i =0; i<n; i++){
            fast= fast.next;
        }

while(fast.next!==null){
    slow = slow.next;
    fast = fast.next;

}
slow.next = slow.next.next;
return dummyNode.next;

    }
}
