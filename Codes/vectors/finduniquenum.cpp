#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int q = 0;

        for(int p : nums){
            q = q ^ p;
        }

        return q;
        
        
        }

};
