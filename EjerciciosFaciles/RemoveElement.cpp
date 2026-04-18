#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j= 0;//marcador 

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[j] = nums[i];
            j++;//sumas otro unico.Para la longitud
        }
    }

    return j; 
    }
};
//literealmente era cambiar de el anterior el condicion.Y los marcadores.