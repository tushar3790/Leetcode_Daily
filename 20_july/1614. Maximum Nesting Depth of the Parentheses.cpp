class Solution {
public:
    int maxDepth(string s) {
        int count =0;
        int result =0;

        for(char & ch : s){
            if(ch == '('){
                count++;
            }
            else if( ch == ')'){
                count--;
            }
            result = max(result , count);
        }
        return result;
    }
};