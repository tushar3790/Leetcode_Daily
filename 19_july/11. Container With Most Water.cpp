#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int lh = 0 ; 
        int rh = n-1;
        int ans = 0;
        while(lh < rh){
            int w = rh-lh ;
            int h = min(height[lh] , height[rh] );
            int area = w *h;
            ans = max(area , ans);
            if(height[lh]< height[rh])lh++; // increase which have less value coz its gonna impact
            else rh--;
            
            
        }
        return ans;
    }
};