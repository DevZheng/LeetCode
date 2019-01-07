//
//  main.cpp
//  用两个栈实现队列
//
//  Created by 郑雨鑫 on 2019/1/7.
//  Copyright © 2019年 郑雨鑫. All rights reserved.
//

#include <iostream>
#include <stack>

using namespace std;

//用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。
class Solution

{
public:
    void push(int node) {
        stack1.push(node);
    }
    
    int pop() {
        if (stack2.empty()) {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        int res = stack2.top();
        stack2.pop();
        return res;
    }
    
private:
    stack<int> stack1;
    stack<int> stack2;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
