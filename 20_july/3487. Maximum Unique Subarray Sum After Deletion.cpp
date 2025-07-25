class Solution {
public:
    int maxSum(vector<int>& nums) {
      unordered_set<int>st;

      int sum =0;
      int neg = INT_MIN;

      for(int &num : nums){
        if(num <=0){
            neg = max(neg , num);
        }
        else if(!st.count(num)){
            sum +=num;
            st.insert(num);
        }
      }
      return sum == 0 ? neg : sum ;
    }
};