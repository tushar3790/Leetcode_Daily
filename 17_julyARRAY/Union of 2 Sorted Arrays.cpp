#include<iostream>
using namespace std;
#include<vector>
#include<set>

class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        set<int> st;
        vector<int> ans ;
        for(int i=0; i<a.size(); i++){
            st.insert(a[i]);
        }
        for(int i=0; i<b.size(); i++){
            st.insert(b[i]);
        }
        
        for(auto num : st){
            ans.push_back(num);
        }
        
      return ans ; 
    }
};