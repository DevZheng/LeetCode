//
//  main.cpp
//  0001-Two-Sum
//
//  Created by Zheng,Yuxin on 2018/12/10.
//  Copyright © 2018 Zheng,Yuxin. All rights reserved.
//

/**
 
 Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 
 You may assume that each input would have exactly one solution, and you may not use the same element twice.
 
 Example:
 
 Given nums = [2, 7, 11, 15], target = 9,
 
 Because nums[0] + nums[1] = 2 + 7 = 9,
 
 return [0, 1].
 
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i ++) {
            for (int j = i + 1; j < nums.size(); j ++) {
                if (nums[i] + nums[j] == target) {
                    int n[] = {i, j};
                    return vector<int>(n, n + 2);
                }
            }
        }
        abort();
    }
};

int main(int argc, const char * argv[]) {
    return 0;
}
