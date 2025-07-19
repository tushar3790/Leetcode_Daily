#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n =nums.size();
        int i=0;

        for(int j=1; j<n; j++){  // run loop and checking for arr[i] value , if we get different value then i++ and overwrite that value
            if(nums[i]!=nums[j]){
                i++;
                nums[i] = nums[j];
                
            }
        }
       return i+1;
    }
};