//
//  main.cpp
//  0002-Add-Two-Numbers
//
//  Created by Zheng,Yuxin on 2018/12/10.
//  Copyright © 2018 Zheng,Yuxin. All rights reserved.
//

#include <iostream>

/**
 You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
 
 You may assume the two numbers do not contain any leading zero, except the number 0 itself.
 
 Example:
 
 Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 Output: 7 -> 0 -> 8
 Explanation: 342 + 465 = 807.
 */

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int flag = 0;
        int num = 0;
        
        ListNode *node = NULL;
        ListNode *nodeS = NULL;
        while (l1 || l2) {
            num = (l1 ? l1 -> val : 0) + (l2 ? l2 -> val : 0) + flag;
            if (num >= 10) {
                flag = 1;
                num = num % 10;
            } else {
                flag = 0;
            }
            ListNode *n = new ListNode(num);
            if (!node) {
                node = n;
                nodeS = node;
            } else {
                node -> next = n;
                node = n;
            }
        
            l1 = l1 ? l1 -> next : NULL;
            l2 = l2 ? l2 -> next : NULL;
        }
        
        if (flag) {
            ListNode *t = new ListNode(1);
            node -> next = t;
        }
        
        return nodeS;
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    return 0;
}
