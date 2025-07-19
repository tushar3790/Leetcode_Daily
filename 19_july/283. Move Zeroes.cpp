#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j =-1;
        // loop to find first zero index
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1)return; // if no index found return 

        for(int i=j+1; i<n; i++){
            if(nums[i]!= 0){
                swap(nums[i] , nums[j]); 
                j++;
            }
        }
        return ;
    }
};