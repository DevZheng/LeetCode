//
//  main.cpp
//  斐波那契数列
//
//  Created by 郑雨鑫 on 2019/1/10.
//  Copyright © 2019年 郑雨鑫. All rights reserved.
//

#include <iostream>

// 大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项（从0开始，第0项为0）。
// n<=39

class Solution {
public:
    int Fibonacci(int n) {
        if (n < 2) {
            return n;
        }
        
        long long f1 = 1;
        long long f2 = 0;
        long long res = f1 + f2;
        
        for (int i = 2; i <= n; i ++) {
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
