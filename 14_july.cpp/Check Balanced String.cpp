#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    public: 
    
    bool isBalanced(string num) {
    int n = num.size();
    int odd = 0;
    int even = 0;

    for(int i=0; i<n; i++){
        if(i%2==0){
            char ch = num[i];
            int n = ch -'0';
            even += n;
        }else{
            char ch = num[i];
            int n = ch -'0';
            odd += n;

        }
    }
    if (odd == even)return true ;
    return false;   
    
    }
};
