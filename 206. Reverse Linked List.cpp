/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/* 1. 題目描述  */
{
    Given the head of a singly linked list, 
    reverse the list, and return the reversed list.
}
/*Example*/
{
    Example 1:
        Input: head = [1,2,3,4,5]
        Output: [5,4,3,2,1]
    Example 2:
        Input: head = [1,2]
        Output: [2,1]
    Example 3:
        Input: head = []
        Output: []
} 
/*Constraints*/
{
    The number of nodes in the list is the range [0, 5000].
    -5000 <= Node.val <= 5000
}
{
    題目鏈接：
        [https://leetcode.com/problems/reverse-linked-list/description/]
    難度：
        [Easy] 
    主要概念：
        [
            Linked List
            Recursion
        ]
}
/*2. 解題思路*/
{
    初步思路：
        [
            Use stack(FILO), and it would be reverse.
        ] 
    優化思路：
        [None]
    時間複雜度：
        [O(2n)] 
    空間複雜度：
        [O(n)]
}
/*3. 代碼實現*/
class Solution {
public:
   ListNode* reverseList(ListNode* head) {
    /*[First mind]:[
        Use stack (FILO), and it would be reverse.
        It need to do loop for count first, have any way to just do one loop?
    ]
    */
        ListNode *tmp=head;
        stack<int> s;
        while(tmp){
            s.push(tmp->val);
            tmp=tmp->next;
        }
        tmp=head;
        while(tmp){
            tmp->val=s.top();
            s.pop();
            tmp=tmp->next;
        }
        return head;
    }
};
/*4. 關鍵收穫*/
{
    學到的新知識： [
        Use knowlege learned by 94. Binary Tree Inorder Traversal
        Not really learn new thing, but pracice to think.
        I have deep think before coding this time.
    ]
    遇到的困難和解決方案： [
        I can not find out way to enhance, there too few thought in my mind
    ]
    自我反思： [
        I need to learn and think more!
    ]
}
/*5. 參考資源*/
{
    [chatgpt]
}
/*6. chatgpt*/
{
    解答改進：[
        改用迭代方式：
            不需要使用堆疊和兩次循環，
            我們可以使用迭代的方法在O(n) 時間
            和O(1) 空間內完成這個任務。
        遞迴解法：
            你可以嘗試使用遞迴的方式來反轉鏈表，
            這也是一個很好的練習。
        優點：
            這個解法只需要一次循環。
            空間複雜度降低到O(1)。 關鍵收穫：
            學習如何在不使用額外空間的情況下操作鏈表。
            理解鏈表的基本概念和反轉操作。
            ]
}
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = nullptr, *next = nullptr;
        while(head) {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
}
}


