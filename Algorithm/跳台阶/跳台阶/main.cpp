//
//  main.cpp
//  跳台阶
//
//  Created by 郑雨鑫 on 2019/1/10.
//  Copyright © 2019年 郑雨鑫. All rights reserved.
//

#include <iostream>

// 一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）。
class Solution {
public:
    int jumpFloor(int number) {
        if (number <= 2) {
            return number;
        }
        
        int f1 = 2;
        int f2 = 1;
        
        int res = f1 + f2;
        for (int i = 3; i <= number; i ++) {
            res = f1 + f2;
            
            f2 = f1;
            f1 = res;
        }
        return res;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
