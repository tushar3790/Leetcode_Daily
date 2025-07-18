#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

// Brute force

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end() );
        return nums[0];
    }
};

// Expected O(log n) Binary Search