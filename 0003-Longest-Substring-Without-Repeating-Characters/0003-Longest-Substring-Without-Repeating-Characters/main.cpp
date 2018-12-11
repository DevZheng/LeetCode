//
//  main.cpp
//  0003-Longest-Substring-Without-Repeating-Characters
//
//  Created by Zheng,Yuxin on 2018/12/11.
//  Copyright © 2018 Zheng,Yuxin. All rights reserved.
//

#include <iostream>
#include <vector>


using namespace std;

/**
 Given a string, find the length of the longest substring without repeating characters.
 
 Example 1:
 
 Input: "abcabcbb"
 Output: 3
 Explanation: The answer is "abc", with the length of 3.
 Example 2:
 
 Input: "bbbbb"
 Output: 1
 Explanation: The answer is "b", with the length of 1.
 Example 3:
 
 Input: "pwwkew"
 Output: 3
 Explanation: The answer is "wke", with the length of 3.
 Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

 */

class Solution {
public:
    // 利用单个 char 占用一个字节的特点，保存在一个 256 大小的数组里 时间复杂度： o(n) 空间复杂度：o(1)
    // 遇到之前相同的，重新计算开始位置
    
    int lengthOfLongestSubstring(string s) {
        if (s.length() <=1) {
            return s.length();
        }
        vector<int> dict(256, -1);
        int res = 0;
        int begin = -1;
        for (int i = 0; i < s.length(); i ++) {
            int n = dict[s[i]];
            
            if (n > begin) {
                begin = n;
            }
            dict[s[i]] = i;
            
            res = max(res, i - begin);
        }
        return res;
    }
};

int main(int argc, const char * dargv[]) {
    // insert code here...
    return 0;
}
