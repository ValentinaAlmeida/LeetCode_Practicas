#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0; 

    int j= 1;//marcador 

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1]) {
            nums[j] = nums[i];
            j++;//sumas otro unico.Para la longitud
        }
    }

    return j; 
}
};
