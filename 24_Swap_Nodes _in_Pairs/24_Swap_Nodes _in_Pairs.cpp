// Author: Carlos Corona https://github.com/Carlos-Corona

// Creation Date: 15/6/2022

// Description: 
// Given a linked list, swap every two adjacent nodes and return its head. 
// You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

// Solution to: 24. Swap Nodes in Pairs
// URL: https://leetcode.com/problems/swap-nodes-in-pairs/description/


#include <iostream>

// Definition for singly-linked list.
 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
       if (head)
        {
            ListNode *left = head;
            ListNode *right = head->next;
            ListNode *dummy = NULL;
            while (left != right && right != NULL)
            {
                left->next = right->next;
                right->next = left;
                if (dummy != NULL)
                {
                    dummy->next = right;
                }
                if (left == head)
                {
                    head = right;
                }
                dummy = left;
                if (dummy->next != NULL)
                {
                    left = left->next;
                    right = left->next;
                }
                else
                {
                    right = left->next;
                }
            }
        }

        return head;
    }
};

int main() {
    // Creating the linked list: 1 -> 2 -> 3 -> 4 -> 5 -> nullptr
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Swapping nodes pairwise
    Solution solution;
    ListNode* swapped_head = solution.swapPairs(head);

    // Printing the modified linked list: 2 -> 1 -> 4 -> 3 -> 5 -> nullptr
    while (swapped_head) {
        std::cout << swapped_head->val << " ";
        swapped_head = swapped_head->next;
    }

    return 0;
}
