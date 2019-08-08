/*
 * @lc app=leetcode.cn id=344 lang=cpp
 *
 * [344] 反转字符串
 */
/*
直接在原vector的基础上反转即可
 */
class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int i = 0; i < s.size()/2; i++){
            swap(s[i],s[s.size()-1-i]);
        }        
    }
};

