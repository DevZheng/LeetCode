//
//  main.cpp
//  从尾到头打印链表
//
//  Created by 郑雨鑫 on 2018/12/26.
//  Copyright © 2018年 郑雨鑫. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};

class Solution {
public:
    void printList(ListNode *node, vector<int> *array) {
        if (node == nullptr) {
            return;
        }
        printList(node -> next, array);
        (*array).push_back(node -> val);
    }
    
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> array;
        printList(head, &array);
        return array;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
