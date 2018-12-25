//
//  main.cpp
//  二维数组查找
//
//  Created by 郑雨鑫 on 2018/12/25.
//  Copyright © 2018年 郑雨鑫. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

/*
 在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
 请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
 */

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        if (array.size() == 0) {
            return false;
        }
        return Find1(target, array, 0, array[0].size() - 1);
    }
    
    bool Find1(int target, vector<vector<int>> array, int sl, int ec) {
        
        if (ec < 0 || sl >= array.size()) {
            return false;
        }
        
        if (array[sl][ec] == target) {
            return true;
        } else if (array[sl][ec] < target) {
            return Find1(target, array, sl + 1, ec);
        } else {
            return Find1(target, array, sl, ec - 1);
        }
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
