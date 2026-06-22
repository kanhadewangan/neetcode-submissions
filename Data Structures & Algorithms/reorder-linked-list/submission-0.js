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
     * @return {void}
     */
    reorderList(head) {
        let slow = head ;
    let fast = head.next ;
    while(fast !== null && fast.next !== null){
        slow = slow.next ;
        fast = fast.next.next ;
    }
    let secondHalf = slow.next ;
    slow.next = null;
    let prev = null ;

    while(secondHalf !== null){
        let temp = secondHalf.next ;
        secondHalf.next =  prev ;
        prev = secondHalf ;
        secondHalf = temp ;
    }
    let firstHalf = head ;
    let secondHalfReversed = prev ;
    while(secondHalfReversed !== null){
        let temp1 = firstHalf.next ;
        let temp2 = secondHalfReversed.next ;
        firstHalf.next = secondHalfReversed ;
        secondHalfReversed.next = temp1 ;
        firstHalf = temp1 ;
        secondHalfReversed = temp2 ;
    }
    return head ;
    }
}
