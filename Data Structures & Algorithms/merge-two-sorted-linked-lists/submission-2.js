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
     * @param {ListNode} list1
     * @param {ListNode} list2
     * @return {ListNode}
     */
    mergeTwoLists(list1, list2) {
            if(list1=== null && list2=== null) return null ;

    let arr = [] ;
    while(list1 !== null){
        arr.push(list1.val) ;
        list1 = list1.next ;
    }
    while(list2 !== null){
        arr.push(list2.val) ;
        list2 = list2.next ;
    }
    arr.sort((a,b)=> a-b) ;
    
    let head = new ListNode(arr[0]) ;
    let current = head ;
    for(let i=1 ; i<arr.length ; i++){
        current.next = new ListNode(arr[i]) ;
        current = current.next ;
    }
    return head ;
  

}

}