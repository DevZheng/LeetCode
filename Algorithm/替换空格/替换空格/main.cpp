//
//  main.cpp
//  替换空格
//
//  Created by 郑雨鑫 on 2018/12/25.
//  Copyright © 2018年 郑雨鑫. All rights reserved.
//

#include <iostream>

using namespace std;

class Solution {
public:
    void replaceSpace(char *str,int length) {
        int totalL = 0;
        
        for (int i = 0; i < length; i ++) {
            if (str[i] == ' ') {
                totalL += 3;
            } else {
                totalL += 1;
            }
        }
    
        str[totalL] = '\0';
        totalL -= 1;
        
        for (int i = length - 1; i >= 0; i --) {
            if (str[i] == ' ') {
                str[totalL] = '0';
                str[totalL - 1] = '2';
                str[totalL - 2] = '%';
                totalL -= 3;
            } else {
                str[totalL] = str[i];
                totalL -= 1;
            }
            if (totalL == i) {
                break;
            }
        }

    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
