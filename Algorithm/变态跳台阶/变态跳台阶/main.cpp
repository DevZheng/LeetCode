//
//  main.cpp
//  变态跳台阶
//
//  Created by 郑雨鑫 on 2019/1/10.
//  Copyright © 2019年 郑雨鑫. All rights reserved.
//

#include <iostream>

// 一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。

class Solution {
public:
    int jumpFloorII(int number) {
        int a[number + 1];
        
        a[0] = 0;
        a[1] = 1;
        a[2] = 2;

        if (number <= 2) {
            return a[number];
        }
        
        for (int i = 3; i <= number; i ++) {
            int total = 0;
            for (int j = 1; j < i; j ++) {
                total += a[i - j];
            }
            total += 1;
            a[i] = total;
        }
        return a[number];
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
