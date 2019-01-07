//
//  main.cpp
//  重建二叉树
//
//  Created by 郑雨鑫 on 2019/1/7.
//  Copyright © 2019年 郑雨鑫. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//  输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回。
class Solution {
public:
    
    TreeNode* reConstructBinaryTree1(vector<int> pre,vector<int> vin, int preS, int preE, int vinS, int vinE) {
        if (preE < preS || vinE < vinS) {
            return nullptr;
        }
        
        TreeNode *node = new TreeNode(pre[preS]);
    
        int mid = vinS;

        for (int i = vinS; i <= vinE; i ++) {
            if (pre[preS] == vin[i]) {
                mid = i;
            }
        }

        node->left = reConstructBinaryTree1(pre, vin, preS + 1, preS + (mid - vinS), vinS, mid - 1);
        node->right = reConstructBinaryTree1(pre, vin, preS + (mid - vinS) + 1, preE, mid + 1, vinE);
        
        return node;
    }
    
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        return reConstructBinaryTree1(pre, vin, 0, pre.size() - 1, 0, vin.size() - 1);
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
