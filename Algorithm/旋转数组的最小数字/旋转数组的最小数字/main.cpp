//
//  main.cpp
//  旋转数组的最小数字
//
//  Created by 郑雨鑫 on 2019/1/8.
//  Copyright © 2019年 郑雨鑫. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

// 把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。 输入一个非减排序的数组的一个旋转，输出旋转数组的最小元素。 例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。 NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。
class Solution {
public:
    
    int helper(vector<int> rotateArray, size_t start, size_t end) {
        if (end - start <= 1) {
            return min(rotateArray[start], rotateArray[end]);
        }
        
        size_t mid = (start + end) / 2;
        
        if (rotateArray[mid] < rotateArray[start]) {
            return helper(rotateArray, start, mid);
        }
 
        return helper(rotateArray, mid, end);
    }
    
    int minNumberInRotateArray(vector<int> rotateArray) {
        if (rotateArray.size() == 0) {
            return 0;
        }
        return helper(rotateArray, 0, rotateArray.size() - 1);
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
