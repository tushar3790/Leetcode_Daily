#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//Brute Force O(n)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        for (int i=0; i<n; i++){
            if (nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};

// Expected O(log n) Binary Search